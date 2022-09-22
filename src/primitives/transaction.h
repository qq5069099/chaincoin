#pragma once

#include <cstdint>
#include "../types/uint256.h"
#include "../consensus/amount.h"
#include "../script/script.h"
#include "../account/account.h"


//������
class CTransaction
{
    int8_t          nVersion;           // �汾��
    uint32_t        nSequence;          // ���к�
    CAccount        accTo;              // Ŀ���ʺ�
    CAmount         nValue;             // ������
    CScript         scriptSig;          // �����ű�
    uint32_t        nLockTime;          // ����ʱ��
};

