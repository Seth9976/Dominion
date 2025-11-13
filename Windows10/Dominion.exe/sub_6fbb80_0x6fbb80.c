// 函数: sub_6fbb80
// 地址: 0x6fbb80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_77232d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i_3 = nullptr
int32_t* i_6 = nullptr
int32_t var_4c = 0
int32_t var_14_1 = 0
int32_t* i = *(data_147dec8 + 0xc)

while (i != 0)
    int32_t* i_2 = i
    i = i[1]
    int32_t* eax_4 = sub_64bfd0(0xc)
    eax_4[3] += 1
    
    if (*eax_4 == 0)
        sub_64be70(eax_4)
    
    int32_t* i_5 = *eax_4
    *eax_4 = *i_5
    *i_5 = 0
    i_5[2] = 0
    *i_5 = *i_2
    i_5[2] = i_6
    
    if (i_6 == 0)
        i_3 = i_5
    else
        i_6[1] = i_5
    
    var_4c += 1
    i_6 = i_5

sub_6fba80(&i_3)
int128_t var_44 = zx.o(0)
var_44:0xc.b = 1
var_44.d = &i_3
int96_t var_34 = (zx.o(0)).12

if (sub_6db2f0(arg1, &var_44) != 0)
    goto label_6fbd46

float xmm2_1 = arg1[3]
float xmm4_1 = arg1[5]
float xmm3_1 = arg1[4]
uint32_t xmm5_4[0x4] = xmm2_1 * 0f + xmm3_1 + xmm4_1 * 0f
float xmm7_4 = (data_147dec8[0x1a] f+ 0f + 0f) ^ (data_8937c0.o).d
int32_t xmm1_2 = __andps_xmmxud_memxud(xmm5_4, data_8937a0.o)
float xmm1_7

if (not(9.99999975e-06f f> xmm1_2))
    xmm1_7 = *arg1 * 0f + arg1[1] + arg1[2] * 0f + xmm7_4

int32_t* result

if (9.99999975e-06f f> xmm1_2 || 0 f< xmm1_7 f* xmm5_4)
    result.b = 0
else
    float xmm1_9 = (xmm1_7 ^ (data_8937c0.o).d) f/ xmm5_4
    var_34.d = xmm2_1 * xmm1_9 + *arg1
    var_34:4.d = xmm3_1 * xmm1_9 + arg1[1]
    var_34:8.d = xmm4_1 * xmm1_9 + arg1[2]
label_6fbd46:
    *arg2 = var_34.q
    arg2[1].d = var_34:8.d
    result.b = 1

char var_45 = result.b
int32_t var_14_2 = 2
int32_t* i_1 = i_3

if (i_1 != 0)
    do
        int32_t* i_4 = i_1
        i_1 = i_1[1]
        sub_64c080(i_4, 0xc)
    while (i_1 != 0)
    
    result.b = var_45

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
