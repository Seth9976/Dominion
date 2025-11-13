// 函数: sub_572b80
// 地址: 0x572b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x1970)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t i_3
uint32_t var_1924
void var_1920

if (arg2 != 0xffffffff)
    sub_572ac0(edx, arg2, ecx, edx, arg2, 0x44d)
    void var_c98
    int32_t eax_12 = sub_590990(&var_c98, arg2, ecx, 0x44d, &var_c98)
    int32_t var_18_4 = eax_12
    void var_1970
    memset(&var_1970, 0, 0x48)
    var_1924 = 0xc
    sub_580700(ecx, &var_1924, 1, &var_1970, 0, &var_c98, eax_12, nullptr)
    int32_t c = 0
    memset(&var_1970, c, 0x48)
    var_1924 = 0x11
    sub_580700(ecx, &var_1924, 1, &var_1970, 0, &var_c98, c, nullptr)
    int32_t i_4 = sub_590990(&var_c98, arg2, ecx, 0x44d, &var_c98)
    int32_t i = i_4
    int32_t i_2 = i
    
    for (; i s> 0; i -= 1)
        int32_t eax_14 = ecx[0x541]
        int32_t* ecx_12
        
        if (eax_14 == 3 || eax_14 == 5)
            ecx_12 = &data_1777938
        
        if ((eax_14 != 3 && eax_14 != 5) || ecx[0x547].b == 0)
            ecx_12 = ecx
        
        uint32_t eax_15 = sub_63ed10(ecx_12, i)
        int32_t eax_16 = sub_572a00(eax_15, 0x44d, ecx, arg2, eax_15)
        int32_t ecx_15 = eax_16
        *sub_572350(eax_16, 0x44d, ecx, arg2) = ecx_15
        uint32_t eax_18 = zx.d(ecx_15.w)
        var_1924 = eax_18
        
        if (eax_18 u>= 0x320)
            sub_591930()
            ecx_15 = eax_16
            eax_18 = var_1924
        
        void* eax_19 = eax_18 * 0x64
        *(eax_19 + ecx + 0x1a70) = arg2
        *(eax_19 + ecx + 0x1a78) = arg2
        *(eax_19 + ecx + 0x1a50) = 0x44d
        *(eax_19 + ecx + 0x1aa4) = 0
        i_4 = sub_581ab0(eax_19, ecx_15, ecx, arg2)
    
    sub_572ac0(
        sub_572ac0(sub_572ac0(i_4, arg2, ecx, 0x44f, arg2, 0x44e), arg2, ecx, 0x44d, arg2, 0x44e), 
        arg2, ecx, 0x450, arg2, 0x44e)
    int32_t eax_23 = sub_590990(&var_1920, arg2, ecx, 0x44e, &var_1920)
    int32_t var_ca0_1 = eax_23
    memset(&var_1970, 0, 0x48)
    var_1924 = 0xd
    i_3 = sub_580700(ecx, &var_1924, 1, &var_1970, 0, &var_1920, eax_23, nullptr)
else
    int32_t ebx_1 = edx
    i_3 = sub_590990(&var_1920, 0xffffffff, ecx, ebx_1, &var_1920)
    int32_t i_1 = i_3
    
    if (i_1 s> 0)
        uint32_t eax_10
        
        do
            int32_t eax_4 = ecx[0x541]
            int32_t* ecx_1
            
            if (eax_4 == 3 || eax_4 == 5)
                ecx_1 = &data_1777938
            
            if ((eax_4 != 3 && eax_4 != 5) || ecx[0x547].b == 0)
                ecx_1 = ecx
            
            uint32_t eax_5 = sub_63ed10(ecx_1, i_1)
            int32_t eax_6 = sub_572a00(eax_5, ebx_1, ecx, 0xffffffff, eax_5)
            *sub_572350(eax_6, edx, ecx, 0xffffffff) = eax_6
            uint32_t eax_8 = zx.d(eax_6.w)
            var_1924 = eax_8
            
            if (eax_8 u>= 0x320)
                sub_591930()
                eax_8 = var_1924
            
            void* eax_9 = eax_8 * 0x64
            int32_t var_14_2 = 0xffffffff
            *(eax_9 + ecx + 0x1a50) = edx
            *(eax_9 + ecx + 0x1a70) = 0xffffffff
            *(eax_9 + ecx + 0x1a78) = 0xffffffff
            *(eax_9 + ecx + 0x1aa4) = 0
            eax_10 = sub_581ab0(eax_9, eax_6, ecx, var_14_2)
            ebx_1 = edx
            i_1 -= 1
        while (i_1 s> 0)
        
        CookieCheckFunction(eax_10)
        return eax_10
CookieCheckFunction(i_3)
return i_3
