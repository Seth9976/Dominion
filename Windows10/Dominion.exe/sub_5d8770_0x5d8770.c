// 函数: sub_5d8770
// 地址: 0x5d8770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QAEPAV_CancellationTokenRegistration@23@P6AXPAX@Z0H@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx
int32_t ebx = edx
int32_t* esi = arg1
void* edi = *fsbase->ThreadLocalStoragePointer

if (data_1a8c6e8 s> *(edi + 8))
    sub_75970e(&data_1a8c6e8)
    
    if (data_1a8c6e8 == 0xffffffff)
        int32_t var_8_1 = 0
        data_1a8c6ec = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        ebx, esi = sub_4acb80(&data_1a8c6ec, "pod_counter")
        data_1a8c6ec = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
        int32_t var_8_2 = 0xffffffff
        __Init_thread_footer(&data_1a8c6e8)

if (data_1a8c6f8 s> *(edi + 8))
    sub_75970e(&data_1a8c6f8)
    
    if (data_1a8c6f8 == 0xffffffff)
        int32_t var_8_3 = 1
        data_1a8c6fc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        ebx, esi = sub_4acb80(&data_1a8c6fc, "pod_count_on")
        int32_t var_8_4 = 0xffffffff
        __Init_thread_footer(&data_1a8c6f8)

uint32_t eax_6 = sub_64e7a0(esi)
sub_665db0(eax_6, &data_1a8c6fc, eax_6, 0x3f800000, 0xffffffff, 0)
int32_t var_2c = ebx
char arg_4
char* result
char** ecx_3

if (arg_4 == 0)
    sub_63df30(&arg_4, "%d")
    int32_t var_8_7 = 4
    int32_t var_2c_2 = 0xffffffff
    result = sub_666380(&arg_4, &data_1a8c6ec, esi, &arg_4)
    int32_t var_8_8 = 5
    
    if (data_cf65bc != 0)
        result = arg_4.d
        
        if (result != 0 && *result != 0)
            ecx_3 = &arg_4
        label_5d891c:
            result = sub_63d4e0(ecx_3)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
else
    char* result_1
    char** eax_7 = sub_63df30(&result_1, "x%d")
    int32_t var_2c_1 = 0xffffffff
    int32_t var_8_5 = 2
    result = sub_666380(eax_7, &data_1a8c6ec, esi, eax_7)
    int32_t var_8_6 = 3
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            ecx_3 = &result_1
            goto label_5d891c
fsbase->NtTib.ExceptionList = ExceptionList
return result
