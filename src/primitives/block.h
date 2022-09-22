#pragma once

#include <cstdint>
#include "../types/uint256.h"
#include "transaction.h"

//��ͷ��
class CBlockHeader
{
    int16_t         nVersion;           // �汾��
    uint32_t        nIndex;             // ������
    uint256         hashPrevBlock;      // ǰһ�������hash
    uint256         hashMerkleRoot;     // ����Merkle����
    uint256         hashMerkleAccount;  // �˻�Merkle����
    uint32_t        nTime;              // ʱ���
    uint32_t        nBits;              // POW�Ѷ�
    uint64_t        nNonce;             // Ҫ�ҵ������
};

//����
class CBlock : public CBlockHeader
{
    std::vector<CTransaction> vtx;       // ���еĽ���
    std::vector<CAccount> vAccount;       // ���еĽ���

};

