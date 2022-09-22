#pragma once

#include <cstdint>
#include "../types/uint256.h"
#include "transaction.h"

//块头类
class CBlockHeader
{
    int16_t         nVersion;           // 版本号
    uint32_t        nIndex;             // 块索引
    uint256         hashPrevBlock;      // 前一个区块的hash
    uint256         hashMerkleRoot;     // 交易Merkle树根
    uint256         hashMerkleAccount;  // 账户Merkle树根
    uint32_t        nTime;              // 时间戳
    uint32_t        nBits;              // POW难度
    uint64_t        nNonce;             // 要找的随机数
};

//块类
class CBlock : public CBlockHeader
{
    std::vector<CTransaction> vtx;       // 所有的交易
    std::vector<CAccount> vAccount;       // 所有的交易

};

