// 函数: _ZNK5Botan14Output_Buffers4peekEPhmmm
// 地址: 0xd7b028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x30)
int64_t entry_x4

if (x8 u<= entry_x4)
    uint8_t* x0_2
    uint64_t x1_1
    uint64_t x2_1
    
    if (*(arg1 + 0x28) + x8 u<= entry_x4)
        x0_2, x1_1, x2_1 = Botan::assertion_failure("msg < message_count()", 
            "Message number is in range", "get", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa1b7)
        return Botan::SecureQueue::peek(x0_2, x1_1, x2_1) __tailcall
    
    int64_t x8_2 = *(arg1 + 0x20) + entry_x4 - x8
    void* x8_4 = *(*(*(arg1 + 8) + (x8_2 u>> 6 & 0x3fffffffffffff8)) + ((x8_2 & 0x1ff) << 3))
    
    if (x8_4 != 0)
        void** x23_1 = *(x8_4 + 0x60)
        uint64_t x19_1 = arg3
        uint64_t x20_1 = arg2
        uint64_t x8_7
        
        if (arg4 == 0)
            x8_7 = arg4
        label_d7b0dc:
            
            if (x19_1 == 0 || x23_1 == 0)
                return 0
        else
            if (x23_1 != 0)
                while (true)
                    int64_t x8_6 = x23_1[5] - x23_1[4]
                    x8_7 = arg4 - x8_6
                    
                    if (arg4 u< x8_6)
                        break
                    
                    x23_1 = *x23_1
                    
                    if (arg4 == x8_6)
                        goto label_d7b0dc
                    
                    arg4 = x8_7
                    
                    if (x23_1 == 0)
                        goto label_d7b0dc
            
            x8_7 = arg4
            
            if (x19_1 == 0 || x23_1 == 0)
                return 0
        
        int64_t result = 0
        
        while (true)
            int64_t x9_8 = x23_1[4]
            int64_t x10_3 = x23_1[5] - x9_8
            uint64_t x10_4 = x10_3 - x8_7
            uint64_t x22_1
            
            if (x10_3 u<= x8_7)
                x22_1 = 0
            else
                x22_1 = x10_4 u< x19_1 ? x10_4 : x19_1
                
                if (x22_1 != 0)
                    if (x20_1 == 0)
                        break
                    
                    int64_t x10_5 = x23_1[1]
                    
                    if (x10_5 == 0)
                        break
                    
                    memmove(x20_1, x10_5 + x9_8 + x8_7, x22_1)
            
            uint64_t temp2_1 = x19_1
            x19_1 -= x22_1
            result += x22_1
            
            if (temp2_1 == x22_1)
                return result
            
            x23_1 = *x23_1
            x8_7 = 0
            x20_1 += x22_1
            
            if (x23_1 == 0)
                return result
        
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        x0_2, x1_1, x2_1 = Botan::assertion_failure("msg < message_count()", 
            "Message number is in range", "get", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xa1b7)
        return Botan::SecureQueue::peek(x0_2, x1_1, x2_1) __tailcall

return 0
