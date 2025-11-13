// 函数: sub_5690c0
// 地址: 0x5690c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
uint32_t eax_3 = sub_57dc30(*(eax_2 + 4), arg3.w)

if (eax_3 != 0)
    int32_t* esi_1 = 7
    int32_t* ecx_2 = *(eax_2 + 4) + 0x1594
    
    while (true)
        if (*ecx_2 != eax_3 && ecx_2[1] != eax_3)
            esi_1 += 1
            ecx_2 = &ecx_2[4]
            
            if (esi_1 s>= 0x48)
                break
            
            continue
        
        if (esi_1 == 0)
            break
        
        int32_t* ebx_1 = *(eax_2 + 4)
        void* var_c94 = nullptr
        void* var_c98 = nullptr
        
        if (sub_582de0(0, arg3, ebx_1, arg2) != 0)
            sub_583350(*(eax_2 + 4))
            void* eax_5
            eax_5.b = 0
            CookieCheckFunction(eax_5)
            return eax_5
        
        uint32_t var_c90
        uint32_t eax_7 = sub_590990(&var_c90, 0xffffffff, ebx_1, 5, &var_c90)
        
        if (eax_7 != 0)
            if (eax_7 != 1)
                sub_591930()
            
            eax_7 = var_c90
        
        if (arg3 == eax_7)
            eax_7 = sub_591930()
        
        sub_5822e0(eax_7, 0xffffffff, ebx_1, arg3, arg4, esi_1, nullptr, 0, 0, 0, 0, 0, nullptr, 0, 
            var_c94, var_c98)
        sub_583350(*(eax_2 + 4))
        void* eax_8
        eax_8.b = 1
        CookieCheckFunction(eax_8)
        return eax_8

eax_3.b = 0
CookieCheckFunction(eax_3)
return eax_3
