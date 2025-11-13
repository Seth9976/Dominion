// 函数: sub_569b30
// 地址: 0x569b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QAE@PAVSchedulerBase@12@HH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* eax_3
int32_t edx
eax_3, edx = sub_573400()
void* esi = eax_3
void* var_28 = esi
int32_t result = *esi
int32_t var_44_2
char const* const var_40_7
char var_11_1
uint32_t eax_4

if (result != 2)
    if (result == 3)
        *(esi + 4)
        eax_4, edx = sub_5916b0(*(esi + 0x10))
        int32_t var_28_2 = 0
        goto label_569b99
    
    if (result == 4)
    label_569bb7:
        var_11_1 = 0
        goto label_569bbb
    
    char const* const var_48_2
    char* ecx_15
    
    if (result != 5)
        var_40_7 = "AllPlayers"
        var_44_2 = 0xcd2
    label_569e0e:
        ecx_15 = "Halt"
        var_48_2 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    label_569e1d:
        sub_63b870(result, &data_801800, ecx_15, var_48_2, var_44_2, var_40_7)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* edi_1 = *(esi + 4)
    int32_t i = 0
    
    if (*(edi_1 + 0xd38) s> 0)
        void* ecx_16 = *fsbase->ThreadLocalStoragePointer
        void* var_18_1 = ecx_16
        
        do
            int32_t temp1_2 = mods.dp.d(sx.q(i), *(edi_1 + 0xd38))
            int32_t eax_23 = *(esi + 0x18)
            int32_t eax_24 = *(esi + 0x10)
            
            if (*(ecx_16 + 0xf010) s>= 0x200)
                sub_591930()
                ecx_16 = var_18_1
            
            int32_t eax_25 = *(ecx_16 + 0xf010)
            int32_t ecx_20 = eax_25 * 0x78
            void* edx_12
            
            if (eax_25 != 0)
                edx_12 = var_18_1 - 0x68 + ecx_20
            else
                edx_12 = nullptr
            
            *(var_18_1 + 0xf010) = eax_25 + 1
            esi = var_28
            *(var_18_1 + ecx_20 + 0x18) = edx_12
            *(var_18_1 + ecx_20 + 0x1c) = temp1_2
            *(var_18_1 + ecx_20 + 0x28) = eax_23
            *(var_18_1 + ecx_20 + 0x10) = 5
            *(var_18_1 + ecx_20 + 0x14) = edi_1
            *(var_18_1 + ecx_20 + 0x20) = eax_24
            
            if (arg4 == 0)
            label_569dfe:
                std::_Xbad_function_call()
                noreturn
            
            (*(*arg4 + 8))(eax_2)
            ecx_16 = var_18_1
            result = *(ecx_16 + 0xf010)
            
            if (result s<= 0)
            label_569ce1:
                var_40_7 = "DomPopContext"
                var_44_2 = 0x792
                var_48_2 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                ecx_15 = "cs.numContexts > 0"
                goto label_569e1d
            
            result -= 1
            i += 1
            *(ecx_16 + 0xf010) = result
            edi_1 = *(esi + 4)
        while (i s< *(edi_1 + 0xd38))
else
    eax_4 = *(esi + 0x10)
    int32_t var_28_1 = *(esi + 0x14)
label_569b99:
    
    if (eax_4 == 0)
        goto label_569bb7
    
    var_11_1 = sub_5696d0(eax_4, edx, eax_4.w, 0x20, 0)
label_569bbb:
    int32_t ecx_3 = *(esi + 0xc)
    result = 0
    int32_t result_1
    
    if (ecx_3 != 0xffffffff)
        result.b = arg3 == 1
        int32_t result_2 = mods.dp.d(sx.q(result + ecx_3), *(*(esi + 4) + 0xd38))
        result = result_2
        result_1 = result_2
    else
        result_1 = 0
    
    void* ecx_5 = *(esi + 4)
    int32_t i_1 = 0
    
    if (*(ecx_5 + 0xd38) s> 0)
        do
            *(ecx_5 + 0xd38)
            int32_t temp1_1 = mods.dp.d(sx.q(result + i_1), *(ecx_5 + 0xd38))
            
            if (var_11_1 == 0)
            label_569c17:
                result = *esi - 1
                
                if (result u> 3)
                    var_40_7 = "AllPlayers"
                    var_44_2 = 0xcfd
                    goto label_569e0e
                
                switch (result)
                    case 0
                        void* ecx_8 = *(esi + 4)
                        int64_t var_2c = 0
                        sub_573050(&var_2c, temp1_1, ecx_8, &var_2c)
                    case 1
                        sub_573050(esi + 0x10, temp1_1, *(esi + 4), esi + 0x10)
                    case 2
                        sub_573260(result, temp1_1, *(esi + 4), *(esi + 0x10))
                    case 3
                        void* var_40_5 = ecx_5
                        sub_572f80(result, *(esi + 0x10), *(esi + 4), *(esi + 0x70), temp1_1)
                
                if (arg4 == 0)
                    goto label_569dfe
                
                (*(*arg4 + 8))(eax_2)
                void* ecx_11 = *fsbase->ThreadLocalStoragePointer
                result = *(ecx_11 + 0xf010)
                
                if (result s<= 0)
                    goto label_569ce1
                
                *(ecx_11 + 0xf010) = result - 1
            else
                char eax_11
                eax_11, ecx_5 = sub_569890()
                
                if (eax_11 == 0 || temp1_1 == *(esi + 0xc))
                    goto label_569c17
            
            ecx_5 = *(esi + 4)
            i_1 += 1
            result = result_1
        while (i_1 s< *(ecx_5 + 0xd38))
void arg_4

if (arg4 != 0)
    result = (*(*arg4 + 0x10))(arg4 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
