BanKitt Community (BKT) Take Over
===============================

What is Bankitt?
----------------

BanKITT is a form of digital currency secured by cryptography and issued through a decentralized and advanced mining market.
BanKITT is using neoscrypt, an ASIC resistant mining algorithm.Masternodes are in place to help secure and maintain the network, receiving a share of the block rewards.

After original developer left the BanKitt project and let it slowly die out, community has stepped up and made the hard work necessary for the project to live on.

For more information, as well as an immediately useable, binary version of
the Bankitt Core software, see https://github.com/modcrypto/bankitt/releases.

Links
------

Webpage :  https://www.bankitt.network/ in developement
Blockexplorer: https://explorer.bankitt.network/
Twitter:  https://twitter.com/BankittC
Discord: https://discord.gg/edksx9y
Telegram : https://t.me/joinchat/HBeVnBB6pqUCyWUuupefOQ
Wallet:  https://github.com/modcrypto/bankitt/releases 

Info
-------
- Name: BanKITT
- Ticker: BKT 
- Premine: 0
- Mining algorithm: NeoScrypt (considering change to XEVEN soon)
- Block time: 60 sec (considering change to 240 sec)
- Block reward: 120 BKT (considering change to 60 BKT) 
- Maximum supply : 30.000.000 (considering to change)
- Block reward distribution : 25% POW / 75% MN (considering change to  35 POW / 15 MN / 10 DF)
- Masternode colateral: 10000 BKT 
- Difficulty retargeting: Dark Gravity Wave 3
- p2p port: 1661 
- RPC port: 6116

License
-------

Bankitt Community is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is meant to be stable. Development is normally done in separate branches.
[Tags](https://github.com/modcrypto/bankitt/tags) are created to indicate new official,
stable release versions of Bankitt Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](/doc/unit-tests.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`

There are also [regression and integration tests](/qa) of the RPC interface, written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/qa) are installed) with: `qa/pull-tester/rpc-tests.py`

The Travis CI system makes sure that every pull request is built for Windows
and Linux, OS X, and that unit and sanity tests are automatically run.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.


