// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "primitives/block.h"
#include "version.h"

#include "hash.h"
#include "tinyformat.h"
#include "utilstrencodings.h"
#include "crypto/common.h"
#include "crypto/neoscrypt.h"
#include "crypto/lyra2z/lyra2z.h"

uint256 CBlockHeader::GetHash() const
{      
    uint256 thash;
    unsigned int profile = 0x0;
    // change to lyra2z   05-15-2018 00:00:00
    if(nTime >= 1526342400 - (24*60*60*3)){ 
      PROTOCOL_VERSION = SOFT_FORK1_PROTOCOL_VERSION;
    }
    if(nTime >= 1526342400 ){  
      lyra2z_hash(BEGIN(nVersion), BEGIN(thash));
    }else{
      neoscrypt((unsigned char *) &nVersion, (unsigned char *) &thash, profile);
    }
    return thash;
}


std::string CBlock::ToString() const
{
    std::stringstream s;
    s << strprintf("CBlock(hash=%s, ver=%d, hashPrevBlock=%s, hashMerkleRoot=%s, nTime=%u, nBits=%08x, nNonce=%u, vtx=%u)\n",
        GetHash().ToString(),
        nVersion,
        hashPrevBlock.ToString(),
        hashMerkleRoot.ToString(),
        nTime, nBits, nNonce,
        vtx.size());
    for (unsigned int i = 0; i < vtx.size(); i++)
    {
        s << "  " << vtx[i].ToString() << "\n";
    }
    return s.str();
}
