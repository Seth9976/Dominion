// 函数: sub_654960
// 地址: 0x654960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76cf2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx
int32_t* edx
ecx, edx = __chkstk(0x142c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28
char const* const var_24
char* ecx_1
char const* const edx_1

if (edx != 0)
    if (edx[1] == 0x22)
        int32_t* eax_4 = sub_5af880(edx)
        void var_c10
        memset(&var_c10, 0, 0x3fc)
        int32_t var_1014[0x100]
        memset(&var_1014, 0, 0x400)
        void* var_414 = ecx
        void var_410
        memset(&var_410, 0, 0x3fc)
        int32_t var_814 = 6
        void var_810
        memset(&var_810, 0, 0x3fc)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_5)(struct 
            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
        void var_1414
        `eh vector constructor iterator'(&var_1414, 4, 0x100, 0x5a0be0)
        int32_t var_8_1 = 0
        int32_t i = 0
        int32_t* eax_5 = *(ecx + 0x189c)
        *(ecx + 0x15f8) = 6
        int32_t var_28_6
        char const* const var_24_6
        char* ecx_3
        
        if (eax_5 s>= 0)
            int32_t var_1418_1
            
            if (eax_5 == 0)
                var_1418_1 = 0
            
            if (eax_5 != 0 || eax_4[2] s<= 0)
            label_654c4e:
                int32_t var_8_2 = 0xffffffff
                uint32_t result =
                    `eh vector vbase constructor iterator'(&var_1414, 4, 0x100, sub_63d770)
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
            
            int32_t edi_1 = 0
            void var_c14
            void* edx_2 = &var_c14
            int32_t ecx_4 = 0
            int32_t var_1424_1 = 0
            int32_t eax_6 = 0
            
            while (true)
                void* ebx_2 = *(&var_1014 + ecx_4) - eax_6
                *edx_2 = eax_6 - 1
                eax_5 = *eax_4 + edi_1
                void* edi_2 = *(&var_414 + ecx_4)
                uint32_t var_1420_1
                uint32_t edx_3
                
                if (*(&var_814 + ecx_4) != 2)
                    struct _EXCEPTION_REGISTRATION_RECORD** eax_12 = sub_64ece0(edi_2, ebx_2)
                    edx_3 = eax_12
                    var_1420_1 = eax_12
                else
                    if (ebx_2 != 0)
                        var_24_6 = "UI2GetOrAllocTemplateChild"
                        var_28_6 = 0xfc1
                        ecx_3 = "idx == 0"
                        break
                    
                    int32_t ecx_5 = *(edi_2 + 0x18a0)
                    
                    if (ecx_5 == 0)
                        void* eax_10 = sub_64e660(edi_2)
                        ecx_5 = *(eax_10 + 0x18c8)
                        *(eax_10 + 5) = 1
                        *(edi_2 + 0x18a0) = ecx_5
                    
                    edx_3 = sub_64e7a0(ecx_5)
                    var_1420_1 = edx_3
                
                i += 1
                *(edx_3 + 0x1600) = edx
                *(edx_3 + 0x1604) = var_1418_1
                int32_t eax_15 = eax_5[4]
                int32_t edi_3 = i << 2
                void* ecx_8 = &var_c14 + edi_3
                (&var_414)[i] = edx_3
                void* var_142c_1 = ecx_8
                int32_t var_24_7 = 0x66
                *ecx_8 = eax_15
                var_1014[i] = eax_15
                int32_t eax_16 = sub_6dcf50(eax_15, eax_5, &data_8cae70, var_24_7)
                (&var_814)[i] = eax_16
                void* edi_4 = edi_3 + &var_1414
                sub_63d8d0(edi_4, sub_6dd140(&var_1414, eax_5, &data_8cae70, 0x64))
                *(var_1420_1 + 0x15f8) = eax_16
                sub_63d850(var_1420_1 + 0x15e0, edi_4)
                
                if (eax_15 != 0)
                    ecx_4 = i << 2
                else
                    ecx_4 = edi_3
                    
                    while (i s> 0)
                        i -= 1
                        ecx_4 = i << 2
                        void* eax_19 = &var_c14 + ecx_4
                        var_142c_1 = eax_19
                        
                        if (*eax_19 != 0)
                            break
                
                int32_t eax_21 = var_1418_1 + 1
                edi_1 = var_1424_1 + 0x18
                var_1418_1 = eax_21
                var_1424_1 = edi_1
                
                if (eax_21 s>= eax_4[2])
                    goto label_654c4e
                
                edx_2 = var_142c_1
                eax_6 = *edx_2
        else
            var_24_6 = "UI2::countChildren"
            var_28_6 = 0xba8
            ecx_3 = "numChildren >= 0"
        
        sub_63b870(eax_5, &data_801800, ecx_3, "C:\x\ax2017\Engine\UI2.cpp", var_28_6, var_24_6)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_24 = "UI2DefGet"
    var_28 = 0xc17
    edx_1 = &data_801800
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
else
    var_24 = "UI2DefGet"
    var_28 = 0xc16
    edx_1 = "UI2DefGet on null pointer"
    ecx_1 = &data_874470

sub_63b870(edx, edx_1, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
