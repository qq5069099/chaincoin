#pragma once

#include <cstdint>
#include <uint256.h>
#include "../consensus/amount.h"
#include "account.h"


//������
class CTransaction
{
    int8_t          nVersion;           // �汾��
    uint32_t        nSequence;          // ���к�
    CAccount        accTo;              // Ŀ���ʺ�
    CAmount         nValue;             // ������
    uint256         scriptSig;          // �����ű�
    uint32_t        nLockTime;          // ����ʱ��
};

