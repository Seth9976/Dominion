// 函数: _ZN5Botan3TLS25Datagram_Sequence_Numbers19next_write_sequenceEt
// 地址: 0xf1b968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 0x10)

if (i != 0)
    int64_t* i_1 = arg1 + 0x10
    int64_t entry_x1
    
    do
        uint32_t x10_1 = zx.d(i[4].w)
        uint32_t temp0_1 = zx.d((entry_x1.d).w)
        
        if (x10_1 u>= temp0_1)
            i_1 = i
        
        i = i[zx.q(x10_1 u< temp0_1 ? 1 : 0)]
    while (i != 0)
    
    if (i_1 != arg1 + 0x10 && zx.d(i_1[4].w) u<= zx.d((entry_x1.d).w))
        int64_t x9_1 = i_1[5]
        i_1[5] = x9_1 + 1
        return x9_1 | entry_x1 << 0x30

Botan::assertion_failure("i != m_write_seqs.end()", "Found epoch", "next_write_sequence", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1a8b)
noreturn Botan::TLS::Datagram_Sequence_Numbers::next_read_sequence() __tailcall
