// 函数: sub_4fe6e0
// 地址: 0x4fe6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi
int32_t var_90 = edi
uint32_t eax = sub_566920(edi)

if (eax == 0)
    return eax

void* eax_1 = sub_573400()
int32_t var_64_1 = 0
int64_t var_6c_1 = 0
int64_t var_5c
__builtin_memset(&var_5c, 0, 0x1c)
int32_t eax_2 = *(eax_1 + 0xc)
int32_t var_70_1 = 0x42
void* var_88 = *(arg1 + 4)
uint32_t var_84 = eax
uint32_t var_78 = 0x3ec
int32_t var_74_1 = 0x3eb
void* eax_4 = sub_573400()
int128_t var_40 = var_70_1.o
int128_t var_30_1 = eax_2.o
int32_t ecx = *(eax_4 + 0x28)
int32_t edx_1 = *(eax_4 + 0x2c)
void* var_80 = *eax_4
int32_t* esi_2 = *(eax_4 + 4)
int64_t var_50
int128_t var_20_1 = var_50.o
var_20_1.d = ecx
void* ecx_1 = var_88
var_20_1:4.d = edx_1
int32_t var_7c_1 = *(eax_4 + 0x10)
int32_t eax_7

if (ecx_1 != esi_2[0x673])
    eax_7 = ecx_1
else
    eax_7 = esi_2[0x674]

int128_t* var_9c_1 = &var_40
sub_6236a0(eax_7, &var_80, esi_2, ecx_1, eax_7, &var_84, &var_88, ecx_1, &var_78, 2)

if (var_88 != 0x3eb)
    var_78 = eax
    void* eax_13 = sub_573400()
    *(eax_13 + 0xc)
    *(eax_13 + 4)
    return sub_582eb0(&var_78, 1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)

var_80 = nullptr
var_88 = nullptr
void* eax_8 = sub_573400()
var_78 = *(eax_8 + 4)
uint32_t eax_10 = zx.d(eax.w)
var_84 = eax_10

if (eax_10 u>= 0x320)
    sub_591930()
    eax_10 = var_84

uint32_t eax_11 = var_78
uint32_t eax_12 = sub_582d10(eax_11, *(eax_10 * 0x64 + eax_11 + 0x1a70), *(eax_8 + 4), eax, 0x3ee, 
    0xb, 0x3eb, 2, *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 0, var_80, 
    var_88)
return eax_12
