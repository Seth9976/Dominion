// 函数: sub_52c5c0
// 地址: 0x52c5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* ThreadLocalStoragePointer = sub_573400()
int32_t ecx_1 = *(ThreadLocalStoragePointer + 0xc)
char const* const var_cc4
int32_t var_cc0_1
char const* const var_cbc_1
char* ecx_2

if (ecx_1 != 0xffffffff)
    int32_t eax_3 = *(ThreadLocalStoragePointer + 4)
    int32_t esi_1 = 0
    int32_t ecx_3 = ecx_1 * 0x5a30
    int32_t var_18_1 = 0
    *(ecx_3 + eax_3 + 0x17558) |= 2
    int32_t var_c98[0x320]
    void* result
    
    for (int32_t i = 0; i s< 3; )
        void* eax_4 = sub_573400()
        result = sub_5887c0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0)
        void* result_1 = result
        
        if (result_1 == 0)
            break
        
        void* var_ca0_1 = nullptr
        void* var_ca4_1 = nullptr
        void* eax_5 = sub_573400()
        void* var_cac = eax_5
        int32_t ecx_5 = *(eax_5 + 4)
        uint32_t ecx_6 = zx.d(result_1.w)
        
        if (ecx_6 u>= 0x320)
            sub_591930()
            eax_5 = var_cac
        
        result = sub_582d10(eax_5, *(ecx_6 * 0x64 + ecx_5 + 0x1a70), *(eax_5 + 4), result_1, 0x3eb, 
            0xb, 0x3ee, 5, *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), 0, 0, nullptr, 0, 
            var_ca0_1, var_ca4_1)
        
        if (esi_1 s>= 0x320)
            result = sub_591930()
        
        var_c98[esi_1] = result_1
        i += 1
        esi_1 = var_18_1 + 1
        var_18_1 = esi_1
    
    if (esi_1 == 0)
        CookieCheckFunction(result)
        return result
    
    TEB* fsbase
    ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
    void* ecx_10 = *ThreadLocalStoragePointer + 0x10
    int32_t edx_4 = *(ecx_10 + 0xf000)
    
    if (edx_4 s> 0)
        void* edx_5 = ecx_10 + edx_4 * 0x78
        int32_t* ecx_11 = *(edx_5 - 0x74)
        int32_t eax_9 = ecx_11[0x541]
        
        if (eax_9 != 3 && eax_9 != 5 && eax_9 != 4 && eax_9 != 6 && ecx_11[0x540].b == 0)
            int32_t edx_6 = *(edx_5 - 0x6c)
            int32_t eax_10 = edx_6
            
            if (edx_6 == ecx_11[0x673])
                eax_10 = ecx_11[0x674]
            
            sub_59f9b0(eax_10, edx_6, ecx_11, eax_10, 0x3c, 0, nullptr, 0, 0, 0, 0, 0)
        
        result = sub_52c320(&var_c98)
        CookieCheckFunction(result)
        return result
    
    var_cbc_1 = "DomGetContext"
    var_cc0_1 = 0x7b9
    var_cc4 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx_2 = "cs.numContexts > 0"
else
    var_cbc_1 = "SetGainFlag"
    var_cc0_1 = 0x52
    var_cc4 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_2 = "c.activePlayer != PLAYER_NONE"

sub_63b870(ThreadLocalStoragePointer, &data_801800, ecx_2, var_cc4, var_cc0_1, var_cbc_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
