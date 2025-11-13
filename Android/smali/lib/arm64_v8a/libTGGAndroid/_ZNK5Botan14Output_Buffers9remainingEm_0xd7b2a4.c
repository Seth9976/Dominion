// 函数: _ZNK5Botan14Output_Buffers9remainingEm
// 地址: 0xd7b2a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x30)
int64_t entry_x1

if (x8 u<= entry_x1)
    if (*(arg1 + 0x28) + x8 u<= entry_x1)
        Botan::assertion_failure("msg < message_count()", "Message number is in range", "get", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa1b7)
        return Botan::SecureQueue::size() __tailcall
    
    int64_t x8_2 = *(arg1 + 0x20) + entry_x1 - x8
    void* x8_4 = *(*(*(arg1 + 8) + (x8_2 u>> 6 & 0x3fffffffffffff8)) + ((x8_2 & 0x1ff) << 3))
    
    if (x8_4 != 0)
        void** i = *(x8_4 + 0x60)
        
        if (i != 0)
            int64_t result = 0
            
            do
                int64_t x10_2 = i[4]
                int64_t x9_7 = i[5]
                i = *i
                result = x9_7 + result - x10_2
            while (i != 0)
            
            return result

return 0
