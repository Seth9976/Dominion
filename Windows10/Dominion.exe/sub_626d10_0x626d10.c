// 函数: sub_626d10
// 地址: 0x626d10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_Process_message_helper@?$ordered_message_processor@I@Concurrency@@AAEJXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = *(arg4 + 0x5dd0)
int32_t eax_7 = (edi + 0xe) s/ 0xf

if (eax_7 s< 1)
    eax_7 = 1

int32_t eax_8 = data_cf6498
void* ebx_2 = eax_8 * 0xf
void* edi_1 = edi - ebx_2
void* eax_9 = 0xf

if (edi_1 s< 0xf)
    eax_9 = edi_1

void* esi_1 = eax_9 + ebx_2
char const* const var_54_1
int32_t var_50
char const* const var_4c
char* ecx

if (esi_1 s> *(arg4 + 0x5788))
    var_4c = "ScorescreenUpdateCardsTab"
    var_50 = 0xef9b
    var_54_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "idxCardEnd <= info.numEntries"
else if (esi_1 s>= ebx_2)
    int32_t var_4c_1 = 0xffffffff
    sub_666120(eax_9, &data_bf0f44, arg3, eax_9)
    
    if (ebx_2 s< esi_1)
        void* edx_4 = arg4
        void* esi_2 = nullptr
        void* edi_2 = ebx_2 * 0x24 + &data_1a96684
        void* var_24_1 = nullptr
        void* ecx_2 = edx_4 + 0x5790 + (ebx_2 << 1)
        void* var_20_1 = ecx_2
        
        while (true)
            void* ecx_5 = edx_4 + ((sx.d(*ecx_2) * 7 + 2) << 2)
            void* var_1c_1 = ecx_5
            int32_t* ebx_3
            
            if (*edi_2 == "tbl_cards" && *(edi_2 - 4) == arg3 && *(edi_2 + 4) == esi_2
                    && *(edi_2 + 8) == 0)
                ebx_3 = *(edi_2 + 0x1c)
                
                if (ebx_3 == 0)
                    goto label_626e74
                
                uint32_t eax_14 = zx.d(ebx_3.w)
                
                if (eax_14 u>= data_c23bac || *(eax_14 * 0x18d0 + data_c23ba8 + 0x18c8) != ebx_3)
                    goto label_626e74
                
                goto label_626e9d
            
        label_626e74:
            ebx_3 = sub_67be20(esi_2)
            *(edi_2 + 0x1c) = ebx_3
            
            if (ebx_3 != 0)
                ecx_5 = var_1c_1
                *edi_2 = "tbl_cards"
                *(edi_2 - 4) = arg3
                *(edi_2 + 4) = esi_2
                *(edi_2 + 8) = 0
            label_626e9d:
                int32_t eax_19 = *ecx_5
                
                if (eax_19 == 1)
                    int32_t eax_21 = sub_5cf7e0()
                    void* eax_22 = sub_571b30(*(var_1c_1 + 4), eax_21)
                    uint32_t eax_23 = sub_64e7a0(ebx_3)
                    sub_5e0df0(
                        sub_5e01b0(
                            sub_665db0(eax_23, eax_22 + 0x74, eax_23, 0x3f800000, 0xffffffff, 0), 
                            eax_22, ebx_3, nullptr, 0, 0), 
                        eax_22, ebx_3, nullptr)
                    sub_5defb0(ebx_3, eax_22)
                    int32_t eax_26 = sub_5cf7e0()
                    void* eax_27 = sub_571b30(*(var_1c_1 + 4), eax_26)
                    eax_9 = *(eax_27 + 0x9c) & 0x940
                    
                    if (((*(eax_27 + 0x98) & 0x7f000400) | eax_9) != 0)
                        var_4c = "DeclarePlainVPCardEntry"
                        var_50 = 0xeecf
                        var_54_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        ecx = "!IsLandscape(entry.vpcard.what, DomCurrentGameVersion())"
                        goto label_6270f5
                    
                    uint32_t eax_29 = sub_64e7a0(ebx_3)
                    sub_665db0(eax_29, &data_be34c0, eax_29, 0x3f800000, 0xffffffff, 0)
                    int32_t var_54_2 = *(var_1c_1 + 0xc)
                    char* const var_18
                    sub_63df30(&var_18, "%d")
                    int32_t var_8_1 = 0
                    int32_t var_60_1 = 0xffffffff
                    sub_666380(&var_18, &data_be34cc, ebx_3, &var_18)
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        char* eax_31 = var_18
                        
                        if (eax_31 != 0 && *eax_31 != 0)
                            char* eax_32 = sub_63d4e0(&var_18)
                            int32_t temp2_1 = *(eax_32 + 4)
                            *(eax_32 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                                var_18 = &data_801800
                    
                    esi_2 = var_24_1
                    int32_t var_8_3 = 0xffffffff
                else
                    eax_9 = eax_19 - 3
                    
                    if (eax_19 != 3)
                        var_4c = "ScorescreenUpdateCardsTab"
                        var_50 = 0xefb2
                        var_54_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        ecx = "Halt"
                        goto label_6270f5
                    
                    sub_626070(ebx_3, ecx_5)
            
            esi_2 += 1
            ecx_2 = var_20_1 + 2
            var_20_1 = ecx_2
            edi_2 += 0x24
            var_24_1 = esi_2
            
            if (ebx_2 + esi_2 s>= esi_1)
                break
            
            edx_4 = arg4
    
    eax_9 = data_cc8d5c
    
    if (eax_9 != 0)
        void* ebx_5 = arg2 - *(eax_9 + 0x7590)
        void* esi_5 = ebx_5 + sub_4b95e0()
        
        if (ebx_5 s>= 0)
            esi_5 = ebx_5
        
        void* ecx_25 = sub_4b9480()[0x46a]
        
        if (eax_8 s<= 0)
            arg4:3.b = 0
        
        if (eax_8 s> 0 || esi_5 s> 0)
            arg4:3.b = 1
        
        void* result
        
        if (eax_8 s>= eax_7 - 1)
            result = ecx_25 - 1
        
        int32_t ebx_6
        
        if (eax_8 s>= eax_7 - 1 && esi_5 s>= result)
            ebx_6 = arg3
        else
            ebx_6 = arg3
            uint32_t eax_39 = sub_64e7a0(ebx_6)
            result = sub_665db0(eax_39, &data_be5da4, eax_39, 0x3f800000, 0xffffffff, 0)
        
        if (arg4:3.b != 0)
            uint32_t eax_40 = sub_64e7a0(ebx_6)
            result = sub_665db0(eax_40, &data_be5d98, eax_40, 0x3f800000, 0xffffffff, 0)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_4c = "GetClient"
    var_50 = 0x7b
    var_54_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"
else
    var_4c = "ScorescreenUpdateCardsTab"
    var_50 = 0xef9c
    var_54_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "idxCardEnd >= idxCardStart"

label_6270f5:
sub_63b870(eax_9, &data_801800, ecx, var_54_1, var_50, var_4c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
