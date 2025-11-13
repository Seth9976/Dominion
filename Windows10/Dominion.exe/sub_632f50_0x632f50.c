// 函数: sub_632f50
// 地址: 0x632f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* eax_1 = __security_cookie ^ &__saved_ebp
void* var_8 = eax_1
char const* const var_48_1
int32_t var_44
char const* const var_40
char* ecx

if (*(arg1 + 0x2c) == 0)
    int32_t var_24
    uint32_t var_1c
    char* eax_3 = sub_5e32f0(&var_1c, &var_24, arg1, &var_1c)
    int32_t ecx_1 = *(arg1 + 0xd8)
    
    if (eax_3.b == 0)
        if (ecx_1 != 0)
            uint32_t eax_5 = sub_5cba00(ecx_1)
            sub_5cd880(eax_5, arg1)
            eax_3 = sub_5cb5a0(eax_5)
            *(arg1 + 0xd8) = 0
    else if (ecx_1 == 0)
        uint32_t eax_4 = sub_631f30(eax_3, var_1c, arg1, var_24, 0, 0)
        sub_5cd5d0(eax_4, arg1, eax_4, 0)
        eax_3 = *(eax_4 + 0x1c28)
        *(arg1 + 0xd8) = eax_3
    else
        eax_3 = sub_5cba00(ecx_1)
        *(eax_3 + 0x234) = var_1c
        *(eax_3 + 0x238) = var_24
    
    uint32_t var_20
    eax_1 = sub_5efe00(eax_3, &var_20, arg1, 0)
    
    if (eax_1.b != 0 && var_20 == 1)
        int32_t eax_6 = *(arg1 + 0xa0)
        void* const edi_1 = &data_86e394
        int32_t edx_6 = *(arg1 + 0x98)
        TEB* fsbase
        void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        int32_t var_28_1 = edx_6
        var_1c = 0
        eax_1 = *ThreadLocalStoragePointer
        void* var_30_1 = eax_1
        int32_t var_18[0x4]
        uint32_t ecx_12
        
        while (true)
            int32_t esi_3 = *(edi_1 + 8)
            sub_5731d0(eax_1, eax_6, 0xb80ad8, edx_6)
            char eax_7 = esi_3(var_28_1)
            eax_1 = var_30_1
            int32_t ecx_10 = *(eax_1 + 0xf010)
            
            if (ecx_10 s<= 0)
                var_40 = "DomPopContext"
                var_44 = 0x792
                var_48_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx = "cs.numContexts > 0"
                goto label_633254
            
            *(eax_1 + 0xf010) = ecx_10 - 1
            ecx_12 = var_1c
            bool cond:0_1
            
            if (eax_7 != 0)
                eax_1 = *(edi_1 + 4)
                var_18[ecx_12] = eax_1
                ecx_12 += 1
                cond:0_1 = *edi_1 != 0x420
                var_1c = ecx_12
            
            if (eax_7 == 0 || not(cond:0_1))
                edx_6 = var_28_1
                edi_1 += 0xc
                
                if (edi_1 != "RectBottomRight")
                    continue
            
            break
        
        sub_632e40(eax_1, &var_18, arg1, ecx_12)
    else if (*(arg1 + 0xe0) != 0)
        sub_632e40(eax_1, nullptr, arg1, 0)
    
    uint32_t eax_8 = 0
    int32_t edi_2 = 0x22
    var_1c = 0
    void* esi_4 = &data_b8221c
    
    while (true)
        if (edi_2 s>= 0x48)
            sub_591930()
            eax_8 = var_1c
        
        if (*esi_4 != 0)
            eax_1 = data_cc8d5c
            
            if (eax_1 == 0)
                var_40 = "GetClient"
                var_44 = 0x7b
                var_48_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                ecx = "gClient"
                break
            
            int32_t edx_10
            
            if (*(eax_1 + 0x5068) == 0)
                edx_10 = 0x18
            else
                edx_10 = sub_4b9480()[0xc]
            
            bool cond:1_1 = (*(sub_571b30(*esi_4, edx_10) + 0x98) & 0x10000000) == 0
            eax_8 = var_1c
            
            if (not(cond:1_1))
                eax_8 += 1
                var_1c = eax_8
            
            esi_4 += 0x10
            edi_2 += 1
            
            if (esi_4 s<= 0xb8225c)
                continue
        
        if (eax_8 != 1)
        label_633202:
            int32_t ecx_23 = *(arg1 + 0xdc)
            
            if (ecx_23 != 0)
                uint32_t eax_16 = sub_5cba00(ecx_23)
                sub_5cd880(eax_16, arg1)
                eax_8 = sub_5cb5a0(eax_16)
                *(arg1 + 0xdc) = 0
        else
            eax_8 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            
            if ((*(eax_8 + 0x42bc) & 2) == 0)
                goto label_633202
            
            int32_t edx_12
            eax_8, edx_12 = sub_5efe00(eax_8, &var_20, arg1, 0)
            
            if (eax_8.b == 0)
                goto label_633202
            
            eax_8 = var_20
            
            if (eax_8 != 1 && eax_8 != 3)
                goto label_633202
            
            eax_8 = sub_5cbaa0(eax_8, edx_12, arg1, 4, 0)
            
            if (eax_8.b == 0)
                goto label_633202
            
            if (*(arg1 + 0xdc) == 0)
                uint32_t eax_14 = sub_631f30(eax_8, 0x22, arg1, var_24, 0, 0)
                sub_5cd5d0(eax_14, arg1, eax_14, 0)
                uint32_t eax_15 = *(eax_14 + 0x1c28)
                *(arg1 + 0xdc) = eax_15
                CookieCheckFunction(eax_15)
                return eax_15
        
        CookieCheckFunction(eax_8)
        return eax_8
else
    var_40 = "UpdateCardHints"
    var_44 = 0x10f71
    var_48_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "gfx.type == DOMGFX_CARD"

label_633254:
sub_63b870(eax_1, &data_801800, ecx, var_48_1, var_44, var_40)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
