#pragma once

#include <cstdint>
#include <uint256.h>
#include "../consensus/amount.h"
#include "account.h"


//交易类
class CTransaction
{
    int8_t          nVersion;           // 版本号

    uint256         scriptSig;          // 签名字符串
    CAccountAddr    toAddr;             // 锁定脚本
    CAmount         nValue;             // 输出金额
    CAmount         nFree;              // 输出金额

    uint32_t        nLockTime;          // 锁定时间
};




