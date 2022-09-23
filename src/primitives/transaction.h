#pragma once

#include <cstdint>
#include <uint256.h>
#include "../consensus/amount.h"
#include "account.h"


//交易类
class CTransaction
{
    int8_t          nVersion;           // 版本号
    uint32_t        nSequence;          // 序列号

    uint256         scriptSig;          // 签名字符串
    uint32_t        scriptSequence;     // 签名序列号
    CAccountAddr    toAddr;            // 锁定脚本
    CAmount         nValue;             // 输出金额

    uint32_t        nLockTime;          // 锁定时间
};




