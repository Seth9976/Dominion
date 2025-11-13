// 函数: sub_559220
// 地址: 0x559220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* eax = sub_573400()
void* ecx = *(sub_573400() + 4)
*(ecx + 0xd38)
int32_t ebx = divs.dp.d(sx.q(*(ecx + 0x19e0) - 1), *(ecx + 0xd38)) + 1
uint32_t esi_1 = zx.d(var_8.w)
uint32_t var_c = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_8 = esi_1 * 0x64
sub_594010(eax_8, *(eax + 0xc), *(eax + 4), *(eax_8 + var_c + 0x1a4c), ebx)
int32_t eax_10 = *(*(eax + 4) + 0x1504)

if (eax_10 != 3 && eax_10 != 5 && eax_10 != 4 && eax_10 != 6)
    sub_61b1b0(eax_10, 0x27, eax_10 == 2, *(eax + 0xc), var_8, nullptr, nullptr, nullptr, nullptr, 
        0, 0, 0, 0, 0)

int32_t* ecx_4 = *(eax + 4)
int32_t edx_3 = *(eax + 0xc)
int32_t eax_11 = ecx_4[0x541]

if (eax_11 != 3 && eax_11 != 5 && eax_11 != 4 && eax_11 != 6 && ecx_4[0x540].b == 0)
    int32_t eax_12 = edx_3
    
    if (edx_3 == ecx_4[0x673])
        eax_12 = ecx_4[0x674]
    
    sub_59f9b0(eax_12, edx_3, ecx_4, eax_12, 0x3d, 0, &var_8, 1, 0, 0, 0, 0)

int32_t ebx_1 = var_8
uint32_t esi_2 = zx.d(ebx_1.w)
var_c = *(eax + 4)

if (esi_2 u>= 0x320)
    sub_591930()

uint32_t ecx_5 = var_c
int32_t edx_4 = *(eax + 0xc)
int32_t var_10 = ebx_1
void* ecx_6 = *(eax + 4)
var_c = *(esi_2 * 0x64 + ecx_5 + 0x1a54)
sub_573050(&var_10, edx_4, ecx_6, &var_10)
int32_t eax_19 = *(*(var_8 * 0x64 + *(eax + 4) + 0x1a48) + 0xa0)
char const* const var_78
int32_t var_74_1
char const* const var_70_2
char* ecx_8

if (eax_19 != 0)
    eax_19()
    void var_5c
    memset(&var_5c, 0, 0x48)
    *(eax + 0xc)
    *(eax + 4)
    var_c = 0x16
    sub_580700(esi_2, &var_c, 1, &var_5c, 0, &var_8, 1, nullptr)
    TEB* fsbase
    void* ecx_10 = *fsbase->ThreadLocalStoragePointer
    eax_19 = *(ecx_10 + 0xf010)
    
    if (eax_19 s> 0)
        *(ecx_10 + 0xf010) = eax_19 - 1
        return eax_19 - 1
    
    var_70_2 = "DomPopContext"
    var_74_1 = 0x792
    var_78 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx_8 = "cs.numContexts > 0"
else
    var_70_2 = "TriggerProphecy"
    var_74_1 = 0x1d
    var_78 = "C:\x\ax2017\Jams\Dominion\code\DomCards_RisingSun.cpp"
    ecx_8 = "def.playFn"

sub_63b870(eax_19, &data_801800, ecx_8, var_78, var_74_1, var_70_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
