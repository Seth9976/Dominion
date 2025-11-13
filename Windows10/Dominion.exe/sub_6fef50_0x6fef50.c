// 函数: sub_6fef50
// 地址: 0x6fef50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t i_2
ecx, i_2 = __chkstk(0x4050)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_8 = ebx
int32_t edi
int32_t var_10 = edi
void var_4010

if (i_2 s> 0)
    void var_4008
    void* edi_1 = &var_4008
    void* esi = arg2 + 0x20
    int32_t i_1 = i_2
    int32_t i
    
    do
        i = i_1
        i_1 -= 1
        esi += 0x40
        int32_t xmm0_1 = *(esi - 0x50)
        edi_1 += 0x40
        int32_t xmm1_1 = *(esi - 0x40)
        int32_t xmm2_1 = *(esi - 0x30)
        int32_t xmm3_1 = *(esi - 0x5c)
        int32_t xmm4_1 = *(esi - 0x4c)
        int32_t xmm5_1 = *(esi - 0x3c)
        int32_t xmm6_1 = *(esi - 0x2c)
        int32_t xmm7_1 = *(esi - 0x58)
        int32_t xmm0_2 = *(esi - 0x48)
        int32_t xmm0_3 = *(esi - 0x38)
        int32_t xmm0_4 = *(esi - 0x28)
        int32_t xmm0_5 = *(esi - 0x54)
        int32_t xmm0_6 = *(esi - 0x44)
        int32_t xmm0_7 = *(esi - 0x34)
        int32_t xmm0_8 = *(esi - 0x24)
        *(edi_1 - 0x48) = *(esi - 0x60)
        *(edi_1 - 0x44) = xmm0_1
        *(edi_1 - 0x40) = xmm1_1
        *(edi_1 - 0x3c) = xmm2_1
        *(edi_1 - 0x38) = xmm3_1
        *(edi_1 - 0x34) = xmm4_1
        *(edi_1 - 0x30) = xmm5_1
        *(edi_1 - 0x2c) = xmm6_1
        *(esi + &var_4010 - arg2 - 0x40) = xmm7_1
        void var_400c
        *(&var_400c - arg2 + esi - 0x40) = xmm0_2
        *(&var_4008 - arg2 + esi - 0x40) = xmm0_3
        void var_4004
        *(&var_4004 - arg2 + esi - 0x40) = xmm0_4
        void var_4000
        *(&var_4000 - arg2 + esi - 0x40) = xmm0_5
        void var_3ffc
        *(&var_3ffc - arg2 + esi - 0x40) = xmm0_6
        void var_3ff8
        *(&var_3ff8 - arg2 + esi - 0x40) = xmm0_7
        void var_3ff4
        *(&var_3ff4 - arg2 + esi - 0x40) = xmm0_8
    while (i != 1)

uint32_t result = (*__glewUniformMatrix4fv)(ecx, i_2, 0, &var_4010)
CookieCheckFunction(result)
return result
