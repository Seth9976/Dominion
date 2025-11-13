// 函数: sub_5244e0
// 地址: 0x5244e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_2c = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
void* eax_4 = sub_573400()
void* result = sub_5887c0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0)

if (result == 0)
    return result

void* eax_5 = sub_573400()
uint32_t esi_1 = zx.d(result.w)
void* ebx_1 = *(eax_5 + 4)

if (esi_1 u>= 0x320)
    eax_5 = sub_591930()

int32_t edi_1 = esi_1 * 0x64

if (sub_5754f0(eax_5, *(edi_1 + ebx_1 + 0x1a4c), ebx_1, 0x10, 0) == 0)
    void* eax_7 = sub_573400()
    void* ebx_2 = *(eax_7 + 4)
    
    if (esi_1 u>= 0x320)
        eax_7 = sub_591930()
    
    if (sub_5754f0(eax_7, *(edi_1 + ebx_2 + 0x1a4c), ebx_2, 0x8000, 0) == 0)
        void* eax_9 = sub_573400()
        void* ebx_3 = *(eax_9 + 4)
        
        if (esi_1 u>= 0x320)
            eax_9 = sub_591930()
        
        if (sub_5754f0(eax_9, *(edi_1 + ebx_3 + 0x1a4c), ebx_3, 8, 0) == 0)
            void* eax_11 = sub_573400()
            void* ebx_4 = *(eax_11 + 4)
            
            if (esi_1 u>= 0x320)
                eax_11 = sub_591930()
            
            if (sub_5754f0(eax_11, *(edi_1 + ebx_4 + 0x1a4c), ebx_4, 0x4000, 0) == 0)
                return sub_566890(1)

sub_566890(0)
void* eax_14 = sub_573400()
int32_t eax_15 = *(eax_14 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

sub_582d10(eax_15, *(edi_1 + eax_15 + 0x1a70), *(eax_14 + 4), result, 0x3eb, 0xb, 0x3ea, 3, 
    *(eax_14 + 0x28), *(eax_14 + 0x2c), *(eax_14 + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
return sub_56e9c0(1)
