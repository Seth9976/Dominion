// 函数: ?QueryTiForCVRecord@TPI1@@UAEHPAEPAK@Z
// 地址: 0x4da150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?link_target@?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAEXPAV?$ITarget@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
char* edx
sub_4d8e50(&var_2c, edx)
int32_t var_8_1 = 0
uint32_t result_1
char* result_3 = result_1
int32_t eax_3 = var_2c
*(arg1 + 0x11b1) = 0x4747
*(arg1 + 0x11b3) = 0x31
void* esi_1 = data_1597dac
*(arg1 + 0x11b0) = 0x54
int32_t var_24 = eax_3
uint32_t result_2 = result_3

if (result_3 != 0 && *result_3 != 0)
    char* eax_4 = sub_63d4e0(&result_2)
    *(eax_4 + 4) += 1

var_8_1.b = 1
uint32_t _ElementSize = *(esi_1 + 0xc)

if (_ElementSize == 0)
    sub_63b870(_ElementSize, &data_801800, "pDefMap->definitionSize != 0", 
        "C:\x\ax2017\Engine\Definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_40 = 0
int32_t var_3c = 0
char var_34 = 1
int32_t var_30 = 0
sub_694da0(&var_40, esi_1, arg1 + 0x11b0, nullptr, &var_40)
int32_t _Buffer = sub_687730(_ElementSize)
sub_695020(_Buffer, esi_1, arg1 + 0x11b0, _Buffer, _ElementSize)
int32_t var_68 = 1
FILE* _Stream_1
uint32_t result
uint32_t ebx_1
bool cond:0_1

if (sub_69dec0(&_Stream_1) != 0)
    FILE* _Stream = _Stream_1
    
    if (fseek(_Stream, arg1 + 0x11b0, 0) == 0)
        ebx_1.b = fwrite(_Buffer, _ElementSize, 1, _Stream) == 1
    else
        ebx_1.b = 0
    
    fclose(_Stream)
    
    if (_Buffer != 0)
        _aligned_free(_Buffer)
    
    if (ebx_1.b != 0)
        var_8_1.b = 4
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
        
        ebx_1.b = 1
    else
        var_8_1.b = 3
        
        if (data_cf65bc == 0)
            ebx_1.b = 0
        else
            result = result_2
            
            if (result != 0)
                cond:0_1 = *result == ebx_1.b
                goto label_4da260
            
            ebx_1.b = 0
else
    uint32_t result_4 = result_2
    char* const result_5 = &data_801800
    
    if (result_4 != 0)
        result_5 = result_4
    
    char* const result_6 = result_5
    sub_63b5f0("DefBinWrite failed to open %s")
    var_8_1.b = 2
    
    if (data_cf65bc == 0 || result_4 == 0)
        ebx_1.b = 0
    else
        cond:0_1 = *result_4 == 0
    label_4da260:
        
        if (cond:0_1)
            ebx_1.b = 0
        else
            result = sub_63d4e0(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
            
            ebx_1.b = 0
int32_t var_8_2 = 5

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
