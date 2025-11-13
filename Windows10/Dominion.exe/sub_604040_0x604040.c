// 函数: sub_604040
// 地址: 0x604040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg3

if (arg2 - 3 u> 3)
    sub_63b870(&ExceptionList, &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x98de, "ComputeReplacement")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char const* const edx_2

switch (arg2)
    case 3
        ___std_fs_get_file_id@8(arg3, arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    case 4
        int32_t var_30_1 = arg4
        sub_63df30(arg3, "%d")
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    case 5
        if (arg4 == 0xffffffff)
            edx_2 = "*missing player*"
            goto label_6040ca
        
        void* esi = &sub_4b9480()[2]
        void* eax_15 = sub_4b9680(esi, arg4)
        void var_20
        sub_4b06c0(eax_15, esi, arg3, eax_15, &var_20)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    case 6
        if (arg4 == 0)
            edx_2 = "*missing card*"
        label_6040ca:
            sub_63d720(arg3, edx_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
        
        void* eax_8 = arg4 * 0x64
        int32_t var_30_2 = 0
        char* var_14
        sub_4e3fa0(eax_8, *(eax_8 + 0xb82520), &var_14, nullptr, arg3)
        int32_t var_8_1 = 0
        uint32_t eax_9 = sub_4c89a0()
        
        if (eax_9 == 0x11)
            sub_692c20(eax_9, &var_14, eax_9, arg5)
        
        char* eax_11 = var_14
        *arg3 = eax_11
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_10 = sub_63d4e0(arg3)
            *(eax_10 + 4) += 1
            eax_11 = var_14
        
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0 && eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg3
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
