// 函数: _ZNK5Botan10Extensions3getERKNS_3OIDE
// 地址: 0xea646c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i = *(arg1 + 0x28)
int64_t* entry_x8

if (i != 0)
    void* entry_x1
    int32_t* x8 = *(entry_x1 + 8)
    int64_t x9_1 = *(entry_x1 + 0x10)
    void* __offset(Botan::OID, 0x28) i_1
    
    if (x8 == x9_1)
        do
            i_1 = i
            i = *i
        while (i != 0)
    else
        i_1 = arg1 + 0x28
        
        while (true)
        label_ea64ac:
            int32_t* x13_1 = *(i + 0x28)
            int32_t* x14_1 = x8
            
            while (true)
                if (*(i + 0x30) != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            break
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (x9_1 == x14_1)
                            break
                        
                        continue
                
                i = *(i + 8)
                
                if (i == 0)
                    goto label_ea64f0
                
                goto label_ea64ac
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_ea64f0:
    
    if (i_1 != arg1 + 0x28)
        int32_t* x11_1 = *(i_1 + 0x28)
        int64_t x12_2 = *(i_1 + 0x30)
        
        if (x11_1 != x12_2)
            do
                if (x9_1 == x8)
                    goto label_ea6558
                
                int32_t x13_2 = *x8
                int32_t x14_2 = *x11_1
                
                if (x13_2 u< x14_2)
                    goto label_ea6558
                
                if (x14_2 u< x13_2)
                    break
                
                x11_1 = &x11_1[1]
                x8 = &x8[1]
            while (x12_2 != x11_1)
        
        int64_t* x0_1 = *(i_1 + 0x40)
        
        if (x0_1 == 0)
            Botan::assertion_failure("m_obj.get() is not null", &data_793a18, "obj", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x306a)
            return Botan::PKCS10_Request::ex_constraints() __tailcall
        
        int64_t result = (*(*x0_1 + 0x10))()
        *entry_x8 = result
        return result

label_ea6558:
*entry_x8 = 0
return 0
