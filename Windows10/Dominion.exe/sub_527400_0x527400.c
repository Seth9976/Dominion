// 函数: sub_527400
// 地址: 0x527400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi
int32_t var_cb0 = edi
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 2
int32_t eax_5 = sub_563fa0(0x1f, &data_cce9d8)
int32_t ebx = 0
int32_t var_ca0 = 0
int32_t var_c98[0x320]
memset(&var_c98, 0, 0xc84)
int32_t esi = sub_566920(edi)
void* var_ca4
void* var_18

if (esi != 0)
    while (true)
        uint32_t edi_1 = zx.d(esi.w)
        void* eax_8 = *(sub_573400() + 4)
        var_ca4 = eax_8
        
        if (edi_1 u>= 0x320)
            sub_591930()
            eax_8 = var_ca4
        
        int32_t ebx_1 = edi_1 * 0x64
        
        if (sub_5754f0(eax_8, *(ebx_1 + eax_8 + 0x1a4c), eax_8, 8, 0) != 0)
            void* eax_11
            
            if (eax_5 != 0)
                eax_11 = *(sub_573400() + 4)
                var_ca4 = eax_11
                
                if (edi_1 u>= 0x320)
                    sub_591930()
                    eax_11 = var_ca4
            
            if (eax_5 == 0 || *(ebx_1 + eax_11 + 0x1a4c) != eax_5)
                ebx = esi
                var_ca0 = ebx
                break
        
        void* eax_12 = var_18
        
        if (eax_12 s>= 0x320)
            sub_591930()
            eax_12 = var_18
        
        var_c98[eax_12] = esi
        var_18 += 1
        esi = sub_566920(edi_1)
        
        if (esi == 0)
            ebx = 0
            break

int32_t eax_16 = *(*(sub_573400() + 4) + 0x1504)

if (eax_16 != 3 && eax_16 != 5 && eax_16 != 4 && eax_16 != 6)
    sub_61b1b0(eax_16, 7, eax_16 == 2, 0xffffffff, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

void* eax_17 = sub_573400()
*(eax_17 + 0xc)
*(eax_17 + 4)
uint32_t result = sub_582eb0(&var_c98, var_18, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)

if (ebx != 0)
    void* eax_18 = sub_573400()
    int32_t ebx_2 = *(eax_18 + 0xc)
    void* edi_2 = *(eax_18 + 4)
    uint32_t esi_1 = zx.d(var_ca0.w)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_20 = esi_1 * 0x64
    sub_576e90(eax_20, edi_2, &var_ca4, ebx_2, *(eax_20 + edi_2 + 0x1a4c), 0)
    sub_5624a0(var_ca0, 0x3ee)
    int32_t var_cb4_1 = 0xc
    int32_t var_cb8_2 = 0
    int32_t var_cbc_2 = 0
    result = sub_5657e0(esi_1, var_ca4.b + 3, 8)

CookieCheckFunction(result)
return result
