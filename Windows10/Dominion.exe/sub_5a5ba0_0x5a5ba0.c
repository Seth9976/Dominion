// 函数: sub_5a5ba0
// 地址: 0x5a5ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t* edx
ecx, edx = __chkstk(0x1000c)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void var_10010
sub_5a59e0(arg2, &var_10010, ecx, edx.w, ecx, arg2)
float xmm2 = *edx
uint32_t i = 0
void* edi_1 = ecx + 0x14

do
    void var_1000c
    float xmm1_4 = xmm2 f* *(&var_1000c + (i << 2))
    *(edi_1 - 0xc) = *(edi_1 - 0xc) - xmm2 f* *(&var_10010 + (i << 2))
    void var_10008
    float xmm1_6 = xmm2 f* *(&var_10008 + (i << 2))
    *edi_1 = *edi_1 - xmm1_4
    void var_10004
    float xmm1_8 = xmm2 f* *(&var_10004 + (i << 2))
    *(edi_1 + 0xc) = *(edi_1 + 0xc) - xmm1_6
    void var_10000
    float xmm1_10 = xmm2 f* *(&var_10000 + (i << 2))
    *(edi_1 + 0x18) = *(edi_1 + 0x18) - xmm1_8
    void var_fffc
    float xmm1_12 = xmm2 f* *(&var_fffc + (i << 2))
    *(edi_1 + 0x24) = *(edi_1 + 0x24) - xmm1_10
    void var_fff8
    float xmm1_14 = xmm2 f* *(&var_fff8 + (i << 2))
    *(edi_1 + 0x30) = *(edi_1 + 0x30) - xmm1_12
    int32_t var_fff4[0x3ff9]
    float xmm1_16 = xmm2 f* var_fff4[i]
    i += 8
    *(edi_1 + 0x3c) = *(edi_1 + 0x3c) - xmm1_14
    *(edi_1 + 0x48) = *(edi_1 + 0x48) - xmm1_16
    edi_1 += 0x60
while (i s< 0x4000)

CookieCheckFunction(i)
return i
