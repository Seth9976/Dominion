// 函数: _ZThn80_NK5Botan11SecureQueue4peekEPhmm
// 地址: 0xd7db4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** i = *(arg1 + 0x10)
size_t x19 = arg3
int64_t x20 = arg2
int64_t result
int64_t x8_3

if (arg4 == 0)
    x8_3 = arg4
label_d7dba4:
    result = 0
    
    if (x19 != 0)
    label_d7dbac:
        
        if (i != 0)
            result = 0
            
            do
                int64_t x9_2 = i[4]
                int64_t x10_2 = i[5] - x9_2
                size_t x10_3 = x10_2 - x8_3
                size_t x22_1
                
                if (x10_2 u<= x8_3)
                    x22_1 = 0
                else
                    x22_1 = x10_3 u< x19 ? x10_3 : x19
                    
                    if (x22_1 != 0)
                        int64_t x10_4
                        
                        if (x20 != 0)
                            x10_4 = i[1]
                        
                        if (x20 == 0 || x10_4 == 0)
                            return non-virtual_thunk_to_Botan::SecureQueue::get_bytes_read() const(
                                Botan::assertion_failure(
                                "n > 0 implies in != nullptr && out != nullptr", 
                                "If n > 0 then args are not null", "copy_mem", 
                                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                                __tailcall
                        
                        memmove(x20, x10_4 + x9_2 + x8_3, x22_1)
                
                size_t temp2_1 = x19
                x19 -= x22_1
                result += x22_1
                
                if (temp2_1 == x22_1)
                    break
                
                i = *i
                x8_3 = 0
                x20 += x22_1
            while (i != 0)
else
    if (i != 0)
        while (true)
            int64_t x8_2 = i[5] - i[4]
            x8_3 = arg4 - x8_2
            
            if (arg4 u< x8_2)
                break
            
            i = *i
            
            if (arg4 == x8_2)
                goto label_d7dba4
            
            arg4 = x8_3
            
            if (i == 0)
                goto label_d7dba4
    
    x8_3 = arg4
    result = 0
    
    if (x19 != 0)
        goto label_d7dbac
return result
