// Copyright (c) 2012-2014 The Bitcoin Core developers
// Copyright (c) 2014-2017 The Bankitt Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * SOFT_FORK1 versioning
 */
static const int SOFT_FORK1_START                = 160000;
static const int SOFT_FORK1_DEVFUND_BLOCK        = SOFT_FORK1_START + 100;
static const int SOFT_FORK1_ALGOCHANGE_TIME      = 1527811200;  // ; 1527811200 =  01 June,2018 00:00:00
/**
 * network protocol versioning
 */
static const int PROTOCOL_VERSION = 90003; //

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 70077;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION = 90002; //

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 60002;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 70201;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 70201;

#endif // BITCOIN_VERSION_H
