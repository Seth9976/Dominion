// 函数: sub_5018b0
// 地址: 0x5018b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi
int32_t var_28 = edi
void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_2 = *(eax_1 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_2 + 0x17558) |= 2
void* var_50

if (sub_563590(0x100) == 0)
    int32_t eax_14 = sub_566920(edi)
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    void* eax_15 = sub_573400()
    uint32_t ebx_1 = zx.d(eax_14.w)
    int32_t eax_16 = *(eax_15 + 4)
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    int32_t* ecx_6 = *(eax_15 + 4)
    int32_t var_40_2
    __builtin_memset(&var_40_2, 0, 0x18)
    int32_t var_44_2 = *(eax_15 + 0x30)
    int32_t var_48_2 = *(eax_15 + 0x2c)
    uint32_t edx_6 = *(ebx_1 * 0x64 + eax_16 + 0x1a70)
    int32_t var_4c_4 = *(eax_15 + 0x28)
    var_50 = 3
    int32_t var_3c_2
    char* var_38_3
    int32_t var_34_3
    void* var_30_3
    void* var_2c_4
    return sub_582d10(eax_16, edx_6, ecx_6, eax_14, 0x3ee, 0xb, 0x3ea, var_50, var_4c_4, var_48_2, 
        var_44_2, var_40_2, var_3c_2, var_38_3, var_34_3, var_30_3, var_2c_4)

void* eax_4 = sub_564390()
int32_t eax_5 = sub_566920(edi)
void* eax_6 = sub_573400()
int32_t ecx_4 = *(*(eax_6 + 4) + 0x1504)

if (ecx_4 != 3 && ecx_4 != 5 && ecx_4 != 4 && ecx_4 != 6)
    void* var_48
    __builtin_memset(&var_48, 0, 0x20)
    int32_t* var_4c_1 = 1
    var_50 = nullptr
    ecx_4.b = ecx_4 == 2
    void* var_44
    int128_t* var_40
    int32_t var_3c
    int32_t var_38_1
    int32_t var_34_1
    int32_t var_30_1
    int32_t var_2c_1
    sub_61b1b0(eax_6, 7, ecx_4.b, 0xffffffff, var_50, var_4c_1, var_48, var_44, var_40, var_3c, 
        var_38_1, var_34_1, var_30_1, var_2c_1)

int32_t var_18 = 0
int32_t var_1c = 0
void* eax_7 = sub_573400()
uint32_t esi_1 = zx.d(eax_5.w)
int32_t eax_8 = *(eax_7 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t* ecx_5 = *(eax_7 + 4)
int32_t var_40_1
__builtin_memset(&var_40_1, 0, 0x18)
int32_t var_44_1 = *(eax_7 + 0x30)
int32_t eax_9 = esi_1 * 0x64
int32_t var_48_1 = *(eax_7 + 0x2c)
int32_t var_4c_2 = *(eax_7 + 0x28)
var_50 = 3
int32_t var_3c_1
char* var_38_2
int32_t var_34_2
void* var_30_2
void* var_2c_2
sub_582d10(eax_9, *(eax_9 + eax_8 + 0x1a70), ecx_5, eax_5, 0x3ee, 0xb, 0x3ea, var_50, var_4c_2, 
    var_48_1, var_44_1, var_40_1, var_3c_1, var_38_2, var_34_2, var_30_2, var_2c_2)

if (eax_4 != 0)
    int32_t edi_2 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    if (*(eax_9 + edi_2 + 0x1a4c) == eax_4)
        sub_56e9c0(1)
        var_50 = &std::_Func_impl_no_alloc<enum CardID (__cdecl *)(void), void>::`vftable'{for `std::_Func_base<void>'}
        int32_t* (* var_4c_3)() = sub_565ce0
        void** var_2c_3 = &var_50
        return sub_5699b0(var_50)

return sub_56e9c0(nullptr)
