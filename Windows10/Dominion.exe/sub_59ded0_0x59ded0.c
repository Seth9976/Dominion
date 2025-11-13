// 函数: sub_59ded0
// 地址: 0x59ded0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76841f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_78 = arg3
char** var_7c = arg3
char* const var_98 = arg5
int32_t var_94 = 0
char* var_8c = nullptr
char var_8d = 0

if (arg7 == *arg6 || arg7 == arg6[1])
    var_8d = 1

char* const eax_4 = var_98
uint32_t edx = zx.d(var_8d)
uint32_t var_70 = 1

if (eax_4[0x1a04] != 0)
    edx = 1

int32_t* eax_5 = arg4
uint32_t var_74 = edx
char var_88 = edx.b
char* edx_2 = arg6[2] - 2
char* edx_3 = arg2
void* var_bc_1
char var_b8_1
int32_t var_b4_1
char const* const var_b0_16
int32_t var_ac_16
char* var_a8
int128_t var_68
void* ecx_14
char* ecx_18
uint32_t* ecx_58
uint32_t esi_5
uint32_t esi_6

switch (edx_2)
    case nullptr
        if (arg6[7] == 0)
            var_a8 = nullptr
            int32_t var_ac_45 = 1
            int32_t* var_b0_45 = eax_5
            var_b4_1 = 0xe
            var_b8_1 = arg6.b
            var_bc_1 = arg8
            goto label_59e001
        
        int32_t eax_12 = sub_63d720(&var_70, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_44 = 1
        int32_t* var_b0_44 = arg4
        int32_t var_14_1 = 0
        int32_t* eax_13 = sub_59aae0(eax_12, arg2, &var_74, arg8, arg6.b, 0xe)
        var_14_1.b = 2
        esi_5 = var_70
        *arg3 = esi_5
        
        if (esi_5 != 0 && *esi_5 != 0)
            char* eax_14 = sub_63d4e0(arg3)
            *(eax_14 + 4) += 1
        
        char* eax_15 = *eax_13
        char* ecx_44 = &data_801800
        var_8c = 0x10
        
        if (eax_15 != 0)
            ecx_44 = eax_15
        
        var_a8 = ecx_44
        sub_63d960(arg3, var_a8)
        int32_t var_14_2 = 3
        
        if (data_cf65bc != 0)
            uint32_t eax_16 = var_74
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_63d4e0(&var_74)
                int32_t temp13_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp13_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_74 = &data_801800
        
        int32_t var_14_3 = 4
        goto label_59f742
    case 1, 5
        sub_63d720(arg3, &data_801800)
        goto label_59e00e
    case 2
        bool cond:11_1 = arg6[7] == 0
        var_a8 = nullptr
        int32_t var_ac_42 = 1
        int32_t* var_b0_42 = eax_5
        
        if (cond:11_1)
            var_b4_1 = 0x1b
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 0x1c
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 3
        var_a8 = nullptr
        int32_t var_ac_43 = 1
        int32_t* var_b0_43 = eax_5
        var_b4_1 = 6
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 4
        bool cond:13_1 = arg6[9] == 0
        var_a8 = nullptr
        int32_t var_ac_46 = 1
        int32_t* var_b0_46 = eax_5
        
        if (cond:13_1)
            var_b4_1 = 8
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 9
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 6
        bool cond:14_1 = arg6[9] == 0
        var_a8 = nullptr
        int32_t var_ac_47 = 1
        int32_t* var_b0_47 = eax_5
        
        if (cond:14_1)
            var_b4_1 = 0xa
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 0xb
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 7
        int32_t eax_18 = sub_59de40(arg6[7])
        var_a8 = nullptr
        int32_t var_ac_48 = 1
        int32_t* var_b0_48 = arg4
        int32_t var_c0_1 = 0
        int32_t var_c4_1 = 1
        int32_t* var_c8_1 = arg4
        int32_t var_14_4 = 5
        sub_59aae0(sub_59aae0(eax_18, arg2, &var_8c, arg8, arg6.b, eax_18), arg2, &var_74, arg8, 
            arg6.b, 0x12)
        var_14_4.b = 6
        char* edx_11 = &data_801800
        char* eax_20 = var_8c
        char* ecx_54 = &data_801800
        
        if (eax_20 != 0)
            ecx_54 = eax_20
        
        char* eax_21 = var_74
        
        if (eax_21 != 0)
            edx_11 = eax_21
        
        sub_63dfa0(eax_21, edx_11, arg3, "[reason]", ecx_54)
        var_14_4.b = 7
        
        if (data_cf65bc != 0)
            uint32_t eax_22 = var_74
            
            if (eax_22 != 0 && *eax_22 != 0)
                char* eax_23 = sub_63d4e0(&var_74)
                int32_t temp1_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                    var_74 = &data_801800
        
        int32_t var_14_5 = 8
        
        if (data_cf65bc == 0)
            goto label_59e00e
        
        char* eax_24 = var_8c
        
        if (eax_24 == 0 || *eax_24 == 0)
            goto label_59e00e
        
        ecx_58 = &var_8c
    label_59f763:
        char* eax_144 = sub_63d4e0(ecx_58)
        int32_t temp18_1 = *(eax_144 + 4)
        *(eax_144 + 4) -= 1
        
        if (temp18_1 == 1)
            sub_64c080(eax_144, *(eax_144 + 0xc) + 0x10)
        
        goto label_59e00e
    case 8
        if (arg6[7] u> 3)
            var_a8 = "DomLogEventToLogLine"
            var_ac_16 = 0xdfe
            var_b0_16 = "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp"
            ecx_18 = "Halt"
        label_59f822:
            sub_63b870(eax_5, &data_801800, ecx_18, var_b0_16, var_ac_16, var_a8)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        switch (arg6[7])
            case 0
                ecx_14 = arg8
                
                if (arg6[8] s>= 0)
                    var_a8 = 6
                    int32_t var_ac_15 = 0
                    int32_t* var_b0_15 = eax_5
                label_59e1f5:
                    var_b4_1 = 0x48
                    var_b8_1 = arg6.b
                    var_bc_1 = ecx_14
                    goto label_59e001
                
                int32_t ecx_16 = neg.d(arg6[8])
                bool cond:46_1 = (arg6[0xa].b & 8) == 0
                var_68 = *arg6
                int128_t var_58_2 = *(arg6 + 0x10)
                int128_t var_48_2 = *(arg6 + 0x20)
                var_48_2.d = ecx_16
                int128_t var_38_2 = *(arg6 + 0x30)
                
                if (cond:46_1)
                    var_a8 = 2
                    int32_t var_ac_14 = 0
                    int32_t* var_b0_14 = eax_5
                    var_b4_1 = 0x49
                    eax_5 = &var_68
                    var_b8_1 = &var_68
                    var_bc_1 = arg8
                else
                    var_a8 = 0xa
                    int32_t var_ac_13 = 0
                    int32_t* var_b0_13 = eax_5
                    var_b4_1 = 0x48
                    eax_5 = &var_68
                    var_b8_1 = &var_68
                    var_bc_1 = arg8
                
                goto label_59e001
            case 1, 2, 3
                var_a8 = 5
                int32_t var_ac_12 = 0
                int32_t* var_b0_12 = eax_5
                var_b4_1 = 0x48
                var_b8_1 = arg6.b
                var_bc_1 = arg8
                goto label_59e001
    case 9
        int32_t temp0_1 = arg6[7]
        ecx_14 = arg8
        bool cond:53_1
        
        if (temp0_1 s> 0xc00)
            if (arg6[7] != 0xe00)
                cond:53_1 = arg6[7] == 0x1000
            label_59e2a0:
                
                if (cond:53_1)
                    goto label_59e2e3
                
                if (arg6[8] == 0xffffffff)
                    var_a8 = nullptr
                    int32_t var_ac_19 = 1
                    int32_t* var_b0_19 = eax_5
                    var_b4_1 = 0x53
                    var_b8_1 = arg6.b
                    var_bc_1 = ecx_14
                    goto label_59e001
                
                if (arg6[8] != 1)
                    var_a8 = "DomLogEventToLogLine"
                    var_ac_16 = 0xe31
                    var_b0_16 = "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp"
                    ecx_18 = "Halt"
                    goto label_59f822
                
                var_a8 = nullptr
                int32_t var_ac_20 = 1
                int32_t* var_b0_20 = eax_5
                var_b4_1 = 0x52
                var_b8_1 = arg6.b
                var_bc_1 = ecx_14
                goto label_59e001
            
        label_59e2e3:
            
            if (arg6[8] s< 0)
                int128_t xmm0_13 = *arg6
                var_a8 = nullptr
                int32_t var_ac_21 = 1
                var_68 = xmm0_13
                int32_t* var_b0_21 = eax_5
                var_b4_1 = 0x49
                eax_5 = &var_68
                int128_t var_58_4 = *(arg6 + 0x10)
                var_b8_1 = &var_68
                var_bc_1 = ecx_14
                int128_t var_48_4 = *(arg6 + 0x20)
                int128_t var_38_4 = *(arg6 + 0x30)
                var_48_4.d = neg.d(arg6[8])
                goto label_59e001
        else
            if (temp0_1 == 0xc00)
                bool cond:39_1 = arg6[8] s>= 0
                var_a8 = nullptr
                int32_t var_ac_18 = 1
                int32_t* var_b0_18 = eax_5
                
                if (cond:39_1)
                    goto label_59e1f5
                
                var_b4_1 = 0x4b
                eax_5 = &var_68
                var_68 = *arg6
                var_b8_1 = &var_68
                var_bc_1 = ecx_14
                int128_t var_58_3 = *(arg6 + 0x10)
                int128_t var_48_3 = *(arg6 + 0x20)
                int128_t var_38_3 = *(arg6 + 0x30)
                var_48_3.d = neg.d(arg6[8])
                goto label_59e001
            
            if (arg6[7] == 0x401)
                var_a8 = nullptr
                int32_t var_ac_17 = 1
                int32_t* var_b0_17 = eax_5
                var_b4_1 = 0x4c
                var_b8_1 = arg6.b
                var_bc_1 = ecx_14
                goto label_59e001
            
            if (arg6[7] != 0x601)
                cond:53_1 = arg6[7] == 0xa00
                goto label_59e2a0
        var_a8 = 4
        int32_t var_ac_22 = 0
        int32_t* var_b0_22 = eax_5
        var_b4_1 = 0x48
        var_b8_1 = arg6.b
        var_bc_1 = ecx_14
        goto label_59e001
    case 0xa
        bool cond:7_1 = arg6[7] != 0x1000
        var_a8 = nullptr
        int32_t var_ac_23 = 1
        int32_t* var_b0_23 = eax_5
        
        if (cond:7_1)
            var_b4_1 = 0x51
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 0x50
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 0xb
        var_a8 = nullptr
        int32_t var_ac_24 = 1
        int32_t* var_b0_24 = eax_5
        var_b4_1 = 0x4d
        var_b8_1 = arg6.b
        var_bc_1 = arg8
    label_59e001:
        sub_59aae0(eax_5, edx_3, arg3, var_bc_1, var_b8_1, var_b4_1)
        goto label_59e00e
    case 0xc
        bool cond:8_1 = arg6[8] == 0
        var_a8 = nullptr
        int32_t var_ac_25 = 1
        int32_t* var_b0_25 = eax_5
        
        if (cond:8_1)
            var_b4_1 = 0x6a
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 0x6b
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 0xd
        sub_63d720(arg3, "<log entry nyi>")
        goto label_59e00e
    case 0xe
        bool cond:5_1 = arg6[7] != 0
        var_a8 = nullptr
        int32_t var_ac_11 = 1
        int32_t* var_b0_11 = eax_5
        
        if (cond:5_1)
            var_b4_1 = 0x5b
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 0x5c
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 0xf
        var_a8 = nullptr
        int32_t var_ac_27 = 1
        int32_t* var_b0_27 = eax_5
        var_b4_1 = 0x1e
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x10, 0x51
        var_a8 = nullptr
        int32_t var_ac_33 = 1
        int32_t* var_b0_33 = eax_5
        var_b4_1 = 0x1f
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x11
        var_a8 = nullptr
        int32_t var_ac_26 = 1
        int32_t* var_b0_26 = eax_5
        var_b4_1 = 0x20
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x12, 0x13
        var_a8 = nullptr
        int32_t var_ac_30 = 1
        int32_t* var_b0_30 = eax_5
        var_b4_1 = 0x24
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x14
        var_a8 = nullptr
        int32_t var_ac_31 = 1
        int32_t* var_b0_31 = eax_5
        var_b4_1 = 0x25
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x16
        var_a8 = nullptr
        int32_t var_ac_28 = 1
        int32_t* var_b0_28 = eax_5
        var_b4_1 = 0x5d
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x17
        var_a8 = nullptr
        int32_t var_ac_29 = 1
        int32_t* var_b0_29 = eax_5
        var_b4_1 = 0x5e
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x18
        var_a8 = nullptr
        int32_t var_ac_50 = 1
        int32_t* var_b0_50 = eax_5
        var_b4_1 = 0x26
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x19
        bool cond:16_1 = *arg6 != 0xffffffff
        var_a8 = nullptr
        int32_t var_ac_51 = 1
        int32_t* var_b0_51 = eax_5
        
        if (cond:16_1)
            var_b4_1 = 0x67
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 0x68
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 0x1a
        if (arg6[7] != 0)
            var_a8 = 0x10
            int32_t var_ac_10 = 1
            int32_t* var_b0_10 = eax_5
            var_b4_1 = 0x63
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_a8 = nullptr
            int32_t var_ac_9 = 1
            int32_t* var_b0_9 = eax_5
            var_b4_1 = 0x64
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 0x1c
        var_a8 = nullptr
        int32_t var_ac_49 = 1
        int32_t* var_b0_49 = eax_5
        var_b4_1 = 0xf
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x1f
        var_a8 = nullptr
        int32_t var_ac_34 = 1
        int32_t* var_b0_34 = eax_5
        var_b4_1 = 0x27
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x20
        var_a8 = nullptr
        int32_t var_ac_35 = 1
        int32_t* var_b0_35 = eax_5
        var_b4_1 = 0x28
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x21
        bool cond:9_1 = arg6[7] != 0x474
        var_a8 = nullptr
        int32_t var_ac_36 = 1
        int32_t* var_b0_36 = eax_5
        
        if (cond:9_1)
            var_b4_1 = 0x29
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        else
            var_b4_1 = 0x2e
            var_b8_1 = arg6.b
            var_bc_1 = arg8
        
        goto label_59e001
    case 0x22
        var_a8 = nullptr
        int32_t var_ac_37 = 1
        int32_t* var_b0_37 = eax_5
        var_b4_1 = 0x2f
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x23
        var_a8 = nullptr
        int32_t var_ac_38 = 1
        int32_t* var_b0_38 = eax_5
        var_b4_1 = 0x31
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x24
        bool cond:10_1 = arg6[7] == arg7
        eax_5 = zx.d(var_74.b)
        var_a8 = nullptr
        
        if (cond:10_1)
            eax_5 = 1
        
        char* var_78_1
        var_78_1.b = eax_5.b
        char* var_ac_39 = var_78_1
        int32_t* var_b0_39 = arg4
        var_b4_1 = 0x69
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        edx_3 = arg2
        goto label_59e001
    case 0x25, 0x26
        void* ecx_4 = arg8
        uint8_t eax_7 = var_74.b
        
        if (arg6[2] == 0x28)
            eax_7 = var_70.b
        
        eax_5 = arg4
        
        if (arg6[7] != 0x3eb)
        label_59dfd5:
            char* const ecx_5 = var_98
            int32_t edx_4 = arg6[7]
            var_a8 = &var_7c
            eax_5 = sub_59dc70(&var_7c, edx_4, ecx_5, var_a8)
            
            if (eax_5.b != 0)
                var_a8 = nullptr
                int32_t var_ac_1 = eax_7.d
                int32_t* var_b0_1 = arg4
                var_b4_1 = 0x60
            label_59dff8:
                var_b8_1 = arg6.b
                var_bc_1 = arg8
                edx_3 = arg2
                goto label_59e001
            
            eax_5 = arg6[7]
            
            if (eax_5 == 0x3ea)
            label_59e11c:
                var_a8 = nullptr
                int32_t var_ac_8 = eax_7.d
                int32_t* var_b0_8 = arg4
                var_b4_1 = 0x3e
                goto label_59dff8
            
            if (eax_5 == 0x461 || eax_5 == 0x460 || eax_5 == 0x462 || eax_5 == 0x45f)
                var_a8 = nullptr
                int32_t var_ac_7 = eax_7.d
                int32_t* var_b0_7 = arg4
                var_b4_1 = 0x3f
                goto label_59dff8
            
            if (eax_5 == 0x3ec)
                if (eax_7 != 0)
                    goto label_59e11c
                
                var_a8 = nullptr
                int32_t var_ac_2 = 1
                int32_t* var_b0_2 = arg4
                var_b4_1 = 0x3d
                goto label_59dff8
            
            if (eax_5 != 0x44e)
                var_a8 = nullptr
                int32_t var_ac_6 = eax_7.d
                int32_t* var_b0_6 = arg4
                var_b4_1 = 0x3b
                goto label_59dff8
            
            int32_t eax_10 = arg6[8]
            edx_3 = arg2
            
            if (eax_10 != 0)
                if (eax_10 == 0xffffffff)
                    eax_5 = arg4
                    ecx_4 = arg8
                label_59e0b3:
                    var_a8 = nullptr
                    int32_t var_ac_4 = eax_7.d
                    int32_t* var_b0_4 = eax_5
                    var_b4_1 = 0x41
                    var_b8_1 = arg6.b
                    var_bc_1 = ecx_4
                    goto label_59e001
                
                int128_t xmm0_1 = *arg6
                var_a8 = nullptr
                int32_t var_ac_5 = eax_7.d
                var_68 = xmm0_1
                eax_5 = &var_68
                int32_t* var_b0_5 = arg4
                int128_t var_58_1 = *(arg6 + 0x10)
                var_b4_1 = 0x3e
                var_b8_1 = &var_68
                var_bc_1 = arg8
                int128_t var_48_1 = *(arg6 + 0x20)
                var_58_1:0xc.d = 0x3eb
                int128_t var_38_1 = *(arg6 + 0x30)
                goto label_59e001
            
            eax_5 = arg4
            ecx_4 = arg8
        else if (arg6[8] != 0)
            if (arg6[8] == 0xffffffff)
                goto label_59e0b3
            
            goto label_59dfd5
        
        var_a8 = nullptr
        int32_t var_ac_3 = eax_7.d
        int32_t* var_b0_3 = eax_5
        var_b4_1 = 0x40
        var_b8_1 = arg6.b
        var_bc_1 = ecx_4
        goto label_59e001
    case 0x27, 0x28
        eax_5 = zx.d(var_74.b)
        
        if (arg6[2] == 0x2a)
            eax_5 = var_70
        
        var_a8 = nullptr
        int32_t var_ac_53 = eax_5.b.d
        int32_t* var_b0_53 = arg4
        var_b4_1 = 0x3c
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x29
        var_a8 = nullptr
        int32_t var_ac_59 = 1
        int32_t* var_b0_59 = eax_5
        var_b4_1 = 0x43
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x2a
        var_a8 = nullptr
        int32_t var_ac_57 = var_88.d
        int32_t* var_b0_57 = eax_5
        var_b4_1 = 0x35
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x2b
        var_a8 = nullptr
        int32_t var_ac_58 = 1
        int32_t* var_b0_58 = eax_5
        var_b4_1 = 0x32
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x2c, 0x2d
        eax_5 = zx.d(var_74.b)
        
        if (arg6[2] == 0x2f)
            eax_5 = var_70
        
        var_a8 = nullptr
        int32_t var_ac_55 = eax_5.b.d
        int32_t* var_b0_55 = arg4
        var_b4_1 = 0x1d
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x2e
        void* ecx_72 = arg8
        
        if (arg6[5] s> 1)
            if (var_74.b == 0)
            label_59e83d:
                var_a8 = nullptr
                int32_t var_ac_61 = 0
                int32_t* var_b0_61 = eax_5
                var_b4_1 = 0x38
                var_b8_1 = arg6.b
                var_bc_1 = ecx_72
                goto label_59e001
            
        label_59e84b:
            
            if (arg6[5] != 1)
            label_59e89a:
                var_a8 = nullptr
                int32_t var_ac_63 = var_88.d
                int32_t* var_b0_63 = eax_5
                var_b4_1 = 0x36
                var_b8_1 = arg6.b
                var_bc_1 = ecx_72
                goto label_59e001
            
            if (arg6[4] s>= 0)
                ecx_72 = arg8
                
                if (arg6[4] s< data_1597e48)
                    edx_3 = arg2
                    eax_5 = arg4
                    
                    if (*(data_1597e44 + (arg6[4] << 3) + 4) != 1 || var_74.b != 0)
                        goto label_59e89a
                    
                    goto label_59e88c
        else if (arg6[4] s>= 0)
            ecx_72 = arg8
            
            if (arg6[4] s< data_1597e48)
                edx_3 = arg2
                eax_5 = arg4
                
                if (*(data_1597e44 + (arg6[4] << 3) + 4) s<= 1 || var_74.b != 0)
                    goto label_59e84b
                
                goto label_59e83d
        
        var_a8 = "XDynArray<struct DomLogCardEntry>::operator []"
        var_ac_16 = 0xd4
        ecx_18 = "index >= 0 && index < mSize"
        var_b0_16 = "C:\x\ax2017\Engine\xDynArray.h"
        goto label_59f822
    case 0x2f
        var_a8 = nullptr
        int32_t var_ac_60 = 1
        int32_t* var_b0_60 = eax_5
        var_b4_1 = 0x39
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x30, 0x31
    label_59e88c:
        var_a8 = nullptr
        int32_t var_ac_62 = 1
        int32_t* var_b0_62 = eax_5
        var_b4_1 = 0x36
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x32
        var_a8 = nullptr
        int32_t var_ac_56 = 1
        int32_t* var_b0_56 = eax_5
        var_b4_1 = 0x46
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x33
        var_a8 = nullptr
        int32_t var_ac_52 = 1
        int32_t* var_b0_52 = eax_5
        var_b4_1 = 0x58
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x34
        var_a8 = nullptr
        int32_t var_ac_40 = 1
        int32_t* var_b0_40 = eax_5
        var_b4_1 = 0x54
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x35
        var_a8 = nullptr
        int32_t var_ac_41 = 1
        int32_t* var_b0_41 = eax_5
        var_b4_1 = 0x55
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x36
        var_a8 = nullptr
        int32_t var_ac_64 = 1
        int32_t* var_b0_64 = eax_5
        var_b4_1 = 0x6d
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x38
        var_a8 = nullptr
        int32_t var_ac_54 = 1
        int32_t* var_b0_54 = eax_5
        var_b4_1 = 0xd
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x39
        var_a8 = nullptr
        int32_t var_ac_65 = 1
        int32_t* var_b0_65 = eax_5
        var_b4_1 = 0x6e
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x3b
        var_a8 = nullptr
        int32_t var_ac_66 = 1
        int32_t* var_b0_66 = eax_5
        var_b4_1 = 0x6f
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x3c
        var_a8 = nullptr
        int32_t var_ac_67 = 1
        int32_t* var_b0_67 = eax_5
        var_b4_1 = 0x70
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x3d
        var_a8 = nullptr
        int32_t var_ac_68 = 1
        int32_t* var_b0_68 = eax_5
        var_b4_1 = 0x71
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x3e
        var_a8 = nullptr
        int32_t var_ac_69 = 1
        int32_t* var_b0_69 = eax_5
        var_b4_1 = 0x72
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x3f
        var_a8 = nullptr
        int32_t var_ac_70 = 1
        int32_t* var_b0_70 = eax_5
        var_b4_1 = 0x73
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x40
        var_a8 = nullptr
        int32_t var_ac_71 = 1
        int32_t* var_b0_71 = eax_5
        var_b4_1 = 0x74
        var_b8_1 = arg6.b
        var_bc_1 = arg8
        goto label_59e001
    case 0x41
        if (*arg6 != 0xffffffff)
            int32_t eax_65 = arg6[7]
            
            if (eax_65 == 0x45f || eax_65 == 0x461)
                int32_t eax_72 = sub_63d720(&var_74, "{campaign} ")
                var_a8 = nullptr
                int32_t var_ac_79 = 1
                int32_t* var_b0_79 = arg4
                int32_t var_14_27 = 0x27
                int32_t* eax_73 = sub_59aae0(eax_72, arg2, &var_70, arg8, arg6.b, 0x78)
                var_14_27.b = 0x29
                esi_6 = var_74
                *arg3 = esi_6
                
                if (esi_6 != 0 && *esi_6 != 0)
                    char* eax_74 = sub_63d4e0(arg3)
                    *(eax_74 + 4) += 1
                
                char* eax_75 = *eax_73
                char* const ecx_135 = &data_801800
                var_8c = 0x20
                
                if (eax_75 != 0)
                    ecx_135 = eax_75
                
                var_a8 = ecx_135
                sub_63d960(arg3, var_a8)
                int32_t var_14_28 = 0x2a
                
                if (data_cf65bc != 0)
                    uint32_t eax_76 = var_70
                    
                    if (eax_76 != 0 && *eax_76 != 0)
                        char* eax_77 = sub_63d4e0(&var_70)
                        int32_t temp19_1 = *(eax_77 + 4)
                        *(eax_77 + 4) -= 1
                        
                        if (temp19_1 == 1)
                            sub_64c080(eax_77, *(eax_77 + 0xc) + 0x10)
                            var_70 = &data_801800
                
                int32_t var_14_29 = 0x2b
            else
                int32_t eax_66 = sub_63d720(&var_74, "{campaign} ")
                var_a8 = nullptr
                int32_t var_ac_78 = 1
                int32_t* var_b0_78 = arg4
                int32_t var_14_24 = 0x2c
                int32_t* eax_67 = sub_59aae0(eax_66, arg2, &var_70, arg8, arg6.b, 0x77)
                var_14_24.b = 0x2e
                esi_6 = var_74
                *arg3 = esi_6
                
                if (esi_6 != 0 && *esi_6 != 0)
                    char* eax_68 = sub_63d4e0(arg3)
                    *(eax_68 + 4) += 1
                
                char* eax_69 = *eax_67
                char* const ecx_128 = &data_801800
                var_8c = 0x100
                
                if (eax_69 != 0)
                    ecx_128 = eax_69
                
                var_a8 = ecx_128
                sub_63d960(arg3, var_a8)
                int32_t var_14_25 = 0x2f
                
                if (data_cf65bc != 0)
                    uint32_t eax_70 = var_70
                    
                    if (eax_70 != 0 && *eax_70 != 0)
                        char* eax_71 = sub_63d4e0(&var_70)
                        int32_t temp22_1 = *(eax_71 + 4)
                        *(eax_71 + 4) -= 1
                        
                        if (temp22_1 == 1)
                            sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
                            var_70 = &data_801800
                
                int32_t var_14_26 = 0x30
        else
            uint32_t* ecx_112 = &var_74
            
            if (arg6[5] != 0)
                int32_t eax_59 = sub_63d720(ecx_112, "{campaign} ")
                var_a8 = nullptr
                int32_t var_ac_77 = 1
                int32_t* var_b0_77 = arg4
                int32_t var_14_21 = 0x22
                int32_t* eax_60 = sub_59aae0(eax_59, arg2, &var_70, arg8, arg6.b, 0x7a)
                var_14_21.b = 0x24
                esi_6 = var_74
                *arg3 = esi_6
                
                if (esi_6 != 0 && *esi_6 != 0)
                    char* eax_61 = sub_63d4e0(arg3)
                    *(eax_61 + 4) += 1
                
                char* eax_62 = *eax_60
                char* const ecx_121 = &data_801800
                var_8c = 0x80
                
                if (eax_62 != 0)
                    ecx_121 = eax_62
                
                var_a8 = ecx_121
                sub_63d960(arg3, var_a8)
                int32_t var_14_22 = 0x25
                
                if (data_cf65bc != 0)
                    uint32_t eax_63 = var_70
                    
                    if (eax_63 != 0 && *eax_63 != 0)
                        char* eax_64 = sub_63d4e0(&var_70)
                        int32_t temp20_1 = *(eax_64 + 4)
                        *(eax_64 + 4) -= 1
                        
                        if (temp20_1 == 1)
                            sub_64c080(eax_64, *(eax_64 + 0xc) + 0x10)
                            var_70 = &data_801800
                
                int32_t var_14_23 = 0x26
            else
                int32_t eax_53 = sub_63d720(ecx_112, "{campaign} ")
                var_a8 = nullptr
                int32_t var_ac_76 = 1
                int32_t* var_b0_76 = arg4
                int32_t var_14_18 = 0x1d
                int32_t* eax_54 = sub_59aae0(eax_53, arg2, &var_70, arg8, arg6.b, 0x79)
                var_14_18.b = 0x1f
                esi_6 = var_74
                *arg3 = esi_6
                
                if (esi_6 != 0 && *esi_6 != 0)
                    char* eax_55 = sub_63d4e0(arg3)
                    *(eax_55 + 4) += 1
                
                char* eax_56 = *eax_54
                char* const ecx_115 = &data_801800
                var_8c = 0x40
                
                if (eax_56 != 0)
                    ecx_115 = eax_56
                
                var_a8 = ecx_115
                sub_63d960(arg3, var_a8)
                int32_t var_14_19 = 0x20
                
                if (data_cf65bc != 0)
                    uint32_t eax_57 = var_70
                    
                    if (eax_57 != 0 && *eax_57 != 0)
                        char* eax_58 = sub_63d4e0(&var_70)
                        int32_t temp21_1 = *(eax_58 + 4)
                        *(eax_58 + 4) -= 1
                        
                        if (temp21_1 == 1)
                            sub_64c080(eax_58, *(eax_58 + 0xc) + 0x10)
                            var_70 = &data_801800
                
                int32_t var_14_20 = 0x21
        
        goto label_59e9e5
    case 0x42
        int32_t eax_90 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_82 = 1
        int32_t* var_b0_82 = arg4
        int32_t var_14_36 = 0x3b
        int32_t* eax_91 = sub_59aae0(eax_90, arg2, &var_70, arg8, arg6.b, 0x85)
        var_14_36.b = 0x3d
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_92 = sub_63d4e0(arg3)
            *(eax_92 + 4) += 1
        
        char* eax_93 = *eax_91
        char* const ecx_155 = &data_801800
        int32_t var_94_5 = 0x2000000
        
        if (eax_93 != 0)
            ecx_155 = eax_93
        
        var_a8 = ecx_155
        sub_63d960(arg3, var_a8)
        int32_t var_14_37 = 0x3e
        
        if (data_cf65bc != 0)
            uint32_t eax_94 = var_70
            
            if (eax_94 != 0 && *eax_94 != 0)
                char* eax_95 = sub_63d4e0(&var_70)
                int32_t temp6_1 = *(eax_95 + 4)
                *(eax_95 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_95, *(eax_95 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_38 = 0x3f
        goto label_59e9e5
    case 0x43
        uint32_t* ecx_139 = &var_74
        
        if (arg6[8] == 0)
            int32_t eax_84 = sub_63d720(ecx_139, "{campaign} ")
            var_a8 = nullptr
            int32_t var_ac_81 = 1
            int32_t* var_b0_81 = arg4
            int32_t var_14_33 = 0x36
            int32_t* eax_85 = sub_59aae0(eax_84, arg2, &var_70, arg8, arg6.b, 0x86)
            var_14_33.b = 0x38
            esi_6 = var_74
            *arg3 = esi_6
            
            if (esi_6 != 0 && *esi_6 != 0)
                char* eax_86 = sub_63d4e0(arg3)
                *(eax_86 + 4) += 1
            
            char* eax_87 = *eax_85
            char* const ecx_148 = &data_801800
            var_8c = 1
            
            if (eax_87 != 0)
                ecx_148 = eax_87
            
            var_a8 = ecx_148
            sub_63d960(arg3, var_a8)
            int32_t var_14_34 = 0x39
            
            if (data_cf65bc != 0)
                uint32_t eax_88 = var_70
                
                if (eax_88 != 0 && *eax_88 != 0)
                    char* eax_89 = sub_63d4e0(&var_70)
                    int32_t temp14_1 = *(eax_89 + 4)
                    *(eax_89 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_64c080(eax_89, *(eax_89 + 0xc) + 0x10)
                        var_70 = &data_801800
            
            int32_t var_14_35 = 0x3a
        else
            int32_t eax_78 = sub_63d720(ecx_139, "{campaign} ")
            var_a8 = nullptr
            int32_t var_ac_80 = 1
            int32_t* var_b0_80 = arg4
            int32_t var_14_30 = 0x31
            int32_t* eax_79 = sub_59aae0(eax_78, arg2, &var_70, arg8, arg6.b, 0x87)
            var_14_30.b = 0x33
            esi_6 = var_74
            *arg3 = esi_6
            
            if (esi_6 != 0 && *esi_6 != 0)
                char* eax_80 = sub_63d4e0(arg3)
                *(eax_80 + 4) += 1
            
            char* eax_81 = *eax_79
            char* const ecx_142 = &data_801800
            var_8c = 2
            
            if (eax_81 != 0)
                ecx_142 = eax_81
            
            var_a8 = ecx_142
            sub_63d960(arg3, var_a8)
            int32_t var_14_31 = 0x34
            
            if (data_cf65bc != 0)
                uint32_t eax_82 = var_70
                
                if (eax_82 != 0 && *eax_82 != 0)
                    char* eax_83 = sub_63d4e0(&var_70)
                    int32_t temp15_1 = *(eax_83 + 4)
                    *(eax_83 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_83, *(eax_83 + 0xc) + 0x10)
                        var_70 = &data_801800
            
            int32_t var_14_32 = 0x35
        
        goto label_59e9e5
    case 0x44
        int32_t eax_41 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_74 = 1
        int32_t* var_b0_74 = arg4
        int32_t var_14_12 = 0x13
        int32_t* eax_42 = sub_59aae0(eax_41, arg2, &var_70, arg8, arg6.b, 0x7b)
        var_14_12.b = 0x15
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_43 = sub_63d4e0(arg3)
            *(eax_43 + 4) += 1
        
        char* eax_44 = *eax_42
        char* const ecx_101 = &data_801800
        int32_t var_94_3 = 0x800000
        
        if (eax_44 != 0)
            ecx_101 = eax_44
        
        var_a8 = ecx_101
        sub_63d960(arg3, var_a8)
        int32_t var_14_13 = 0x16
        
        if (data_cf65bc != 0)
            uint32_t eax_45 = var_70
            
            if (eax_45 != 0 && *eax_45 != 0)
                char* eax_46 = sub_63d4e0(&var_70)
                int32_t temp4_1 = *(eax_46 + 4)
                *(eax_46 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_14 = 0x17
        goto label_59e9e5
    case 0x45
        int32_t eax_47 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_75 = 1
        int32_t* var_b0_75 = arg4
        int32_t var_14_15 = 0x18
        int32_t* eax_48 = sub_59aae0(eax_47, arg2, &var_70, arg8, arg6.b, 0x7c)
        var_14_15.b = 0x1a
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_49 = sub_63d4e0(arg3)
            *(eax_49 + 4) += 1
        
        char* eax_50 = *eax_48
        char* const ecx_108 = &data_801800
        void* var_94_4 = &data_1000000
        
        if (eax_50 != 0)
            ecx_108 = eax_50
        
        var_a8 = ecx_108
        sub_63d960(arg3, var_a8)
        int32_t var_14_16 = 0x1b
        
        if (data_cf65bc != 0)
            uint32_t eax_51 = var_70
            
            if (eax_51 != 0 && *eax_51 != 0)
                char* eax_52 = sub_63d4e0(&var_70)
                int32_t temp5_1 = *(eax_52 + 4)
                *(eax_52 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_17 = 0x1c
        goto label_59e9e5
    case 0x46
        int32_t eax_35 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_73 = 1
        int32_t* var_b0_73 = arg4
        int32_t var_14_9 = 0xe
        int32_t* eax_36 = sub_59aae0(eax_35, arg2, &var_70, arg8, arg6.b, 0x7e)
        var_14_9.b = 0x10
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_37 = sub_63d4e0(arg3)
            *(eax_37 + 4) += 1
        
        char* eax_38 = *eax_36
        char* ecx_94 = &data_801800
        struct DOS_Header* const var_94_2 = &__dos_header
        
        if (eax_38 != 0)
            ecx_94 = eax_38
        
        var_a8 = ecx_94
        sub_63d960(arg3, var_a8)
        int32_t var_14_10 = 0x11
        
        if (data_cf65bc != 0)
            uint32_t eax_39 = var_70
            
            if (eax_39 != 0 && *eax_39 != 0)
                char* eax_40 = sub_63d4e0(&var_70)
                int32_t temp3_1 = *(eax_40 + 4)
                *(eax_40 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_11 = 0x12
        goto label_59e9e5
    case 0x47
        int32_t eax_29 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_72 = 1
        int32_t* var_b0_72 = arg4
        int32_t var_14_6 = 9
        int32_t* eax_30 = sub_59aae0(eax_29, arg2, &var_70, arg8, arg6.b, 0x7d)
        var_14_6.b = 0xb
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_31 = sub_63d4e0(arg3)
            *(eax_31 + 4) += 1
        
        char* eax_32 = *eax_30
        char* ecx_87 = &data_801800
        int32_t var_94_1 = 0x200000
        
        if (eax_32 != 0)
            ecx_87 = eax_32
        
        var_a8 = ecx_87
        sub_63d960(arg3, var_a8)
        int32_t var_14_7 = 0xc
        
        if (data_cf65bc != 0)
            uint32_t eax_33 = var_70
            
            if (eax_33 != 0 && *eax_33 != 0)
                char* eax_34 = sub_63d4e0(&var_70)
                int32_t temp2_1 = *(eax_34 + 4)
                *(eax_34 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_8 = 0xd
    label_59e9e5:
        
        if (data_cf65bc == 0 || esi_6 == 0 || *esi_6 == 0)
            goto label_59e00e
        
        ecx_58 = &var_74
        goto label_59f763
    case 0x48
        uint32_t* ecx_159 = &var_74
        
        if (arg6[8] s>= 0)
            int32_t eax_102 = sub_63d720(ecx_159, "{campaign} ")
            var_a8 = nullptr
            int32_t var_ac_84 = 1
            int32_t* var_b0_84 = arg4
            int32_t var_14_42 = 0x45
            int32_t* eax_103 = sub_59aae0(eax_102, arg2, &var_70, arg8, arg6.b, 0x82)
            var_14_42.b = 0x47
            esi_6 = var_74
            *arg3 = esi_6
            
            if (esi_6 != 0 && *esi_6 != 0)
                char* eax_104 = sub_63d4e0(arg3)
                *(eax_104 + 4) += 1
            
            char* eax_105 = *eax_103
            char* const ecx_168 = &data_801800
            var_8c = 4
            
            if (eax_105 != 0)
                ecx_168 = eax_105
            
            var_a8 = ecx_168
            sub_63d960(arg3, var_a8)
            int32_t var_14_43 = 0x48
            
            if (data_cf65bc != 0)
                uint32_t eax_106 = var_70
                
                if (eax_106 != 0 && *eax_106 != 0)
                    char* eax_107 = sub_63d4e0(&var_70)
                    int32_t temp16_1 = *(eax_107 + 4)
                    *(eax_107 + 4) -= 1
                    
                    if (temp16_1 == 1)
                        sub_64c080(eax_107, *(eax_107 + 0xc) + 0x10)
                        var_70 = &data_801800
            
            int32_t var_14_44 = 0x49
        else
            int32_t eax_96 = sub_63d720(ecx_159, "{campaign} ")
            var_a8 = nullptr
            int32_t var_ac_83 = 1
            int32_t* var_b0_83 = arg4
            int32_t var_14_39 = 0x40
            int32_t* eax_97 = sub_59aae0(eax_96, arg2, &var_70, arg8, arg6.b, 0x81)
            var_14_39.b = 0x42
            esi_6 = var_74
            *arg3 = esi_6
            
            if (esi_6 != 0 && *esi_6 != 0)
                char* eax_98 = sub_63d4e0(arg3)
                *(eax_98 + 4) += 1
            
            char* eax_99 = *eax_97
            char* const ecx_162 = &data_801800
            var_8c = 8
            
            if (eax_99 != 0)
                ecx_162 = eax_99
            
            var_a8 = ecx_162
            sub_63d960(arg3, var_a8)
            int32_t var_14_40 = 0x43
            
            if (data_cf65bc != 0)
                uint32_t eax_100 = var_70
                
                if (eax_100 != 0 && *eax_100 != 0)
                    char* eax_101 = sub_63d4e0(&var_70)
                    int32_t temp17_1 = *(eax_101 + 4)
                    *(eax_101 + 4) -= 1
                    
                    if (temp17_1 == 1)
                        sub_64c080(eax_101, *(eax_101 + 0xc) + 0x10)
                        var_70 = &data_801800
            
            int32_t var_14_41 = 0x44
        
        goto label_59e9e5
    case 0x49
        int32_t eax_108 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_85 = 1
        int32_t* var_b0_85 = arg4
        int32_t var_14_45 = 0x4a
        int32_t* eax_109 = sub_59aae0(eax_108, arg2, &var_70, arg8, arg6.b, 0x84)
        var_14_45.b = 0x4c
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_110 = sub_63d4e0(arg3)
            *(eax_110 + 4) += 1
        
        char* eax_111 = *eax_109
        char* const ecx_175 = &data_801800
        int32_t var_94_6 = 0x4000000
        
        if (eax_111 != 0)
            ecx_175 = eax_111
        
        var_a8 = ecx_175
        sub_63d960(arg3, var_a8)
        int32_t var_14_46 = 0x4d
        
        if (data_cf65bc != 0)
            uint32_t eax_112 = var_70
            
            if (eax_112 != 0 && *eax_112 != 0)
                char* eax_113 = sub_63d4e0(&var_70)
                int32_t temp7_1 = *(eax_113 + 4)
                *(eax_113 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_113, *(eax_113 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_47 = 0x4e
        goto label_59e9e5
    case 0x4a
        int32_t eax_114 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_86 = 1
        int32_t* var_b0_86 = arg4
        int32_t var_14_48 = 0x4f
        int32_t* eax_115 = sub_59aae0(eax_114, arg2, &var_70, arg8, arg6.b, 0x8a)
        var_14_48.b = 0x51
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_116 = sub_63d4e0(arg3)
            *(eax_116 + 4) += 1
        
        char* eax_117 = *eax_115
        char* const ecx_182 = &data_801800
        int32_t var_94_7 = 0x8000000
        
        if (eax_117 != 0)
            ecx_182 = eax_117
        
        var_a8 = ecx_182
        sub_63d960(arg3, var_a8)
        int32_t var_14_49 = 0x52
        
        if (data_cf65bc != 0)
            uint32_t eax_118 = var_70
            
            if (eax_118 != 0 && *eax_118 != 0)
                char* eax_119 = sub_63d4e0(&var_70)
                int32_t temp8_1 = *(eax_119 + 4)
                *(eax_119 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(eax_119, *(eax_119 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_50 = 0x53
        goto label_59e9e5
    case 0x4b
        int32_t eax_120 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_87 = 1
        int32_t* var_b0_87 = arg4
        int32_t var_14_51 = 0x54
        int32_t* eax_121 = sub_59aae0(eax_120, arg2, &var_70, arg8, arg6.b, 0x88)
        var_14_51.b = 0x56
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_122 = sub_63d4e0(arg3)
            *(eax_122 + 4) += 1
        
        char* eax_123 = *eax_121
        char* const ecx_189 = &data_801800
        int32_t var_94_8 = 0x80000000
        
        if (eax_123 != 0)
            ecx_189 = eax_123
        
        var_a8 = ecx_189
        sub_63d960(arg3, var_a8)
        int32_t var_14_52 = 0x57
        
        if (data_cf65bc != 0)
            uint32_t eax_124 = var_70
            
            if (eax_124 != 0 && *eax_124 != 0)
                char* eax_125 = sub_63d4e0(&var_70)
                int32_t temp9_1 = *(eax_125 + 4)
                *(eax_125 + 4) -= 1
                
                if (temp9_1 == 1)
                    sub_64c080(eax_125, *(eax_125 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_53 = 0x58
        goto label_59e9e5
    case 0x4c
        int32_t eax_126 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = 4
        int32_t var_ac_88 = 0
        int32_t* var_b0_88 = arg4
        int32_t var_14_54 = 0x59
        int32_t* eax_127 = sub_59aae0(eax_126, arg2, &var_70, arg8, arg6.b, 0x7f)
        var_14_54.b = 0x5b
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_128 = sub_63d4e0(arg3)
            *(eax_128 + 4) += 1
        
        char* eax_129 = *eax_127
        char* const ecx_196 = &data_801800
        int32_t var_94_9 = 0x10000000
        
        if (eax_129 != 0)
            ecx_196 = eax_129
        
        var_a8 = ecx_196
        sub_63d960(arg3, var_a8)
        int32_t var_14_55 = 0x5c
        
        if (data_cf65bc != 0)
            uint32_t eax_130 = var_70
            
            if (eax_130 != 0 && *eax_130 != 0)
                char* eax_131 = sub_63d4e0(&var_70)
                int32_t temp10_1 = *(eax_131 + 4)
                *(eax_131 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_131, *(eax_131 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_56 = 0x5d
        goto label_59e9e5
    case 0x4d
        int32_t eax_132 = sub_63d720(&var_74, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_89 = 1
        int32_t* var_b0_89 = arg4
        int32_t var_14_57 = 0x5e
        int32_t* eax_133 = sub_59aae0(eax_132, arg2, &var_70, arg8, arg6.b, 0x83)
        var_14_57.b = 0x60
        esi_6 = var_74
        *arg3 = esi_6
        
        if (esi_6 != 0 && *esi_6 != 0)
            char* eax_134 = sub_63d4e0(arg3)
            *(eax_134 + 4) += 1
        
        char* eax_135 = *eax_133
        char* const ecx_203 = &data_801800
        int32_t var_94_10 = 0x20000000
        
        if (eax_135 != 0)
            ecx_203 = eax_135
        
        var_a8 = ecx_203
        sub_63d960(arg3, var_a8)
        int32_t var_14_58 = 0x61
        
        if (data_cf65bc != 0)
            uint32_t eax_136 = var_70
            
            if (eax_136 != 0 && *eax_136 != 0)
                char* eax_137 = sub_63d4e0(&var_70)
                int32_t temp11_1 = *(eax_137 + 4)
                *(eax_137 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_137, *(eax_137 + 0xc) + 0x10)
                    var_70 = &data_801800
        
        int32_t var_14_59 = 0x62
        goto label_59e9e5
    case 0x4e
        int32_t eax_138 = sub_63d720(&var_70, "{campaign} ")
        var_a8 = nullptr
        int32_t var_ac_90 = 1
        int32_t* var_b0_90 = arg4
        int32_t var_14_60 = 0x63
        int32_t* eax_139 = sub_59aae0(eax_138, arg2, &var_98, arg8, arg6.b, 0x80)
        var_14_60.b = 0x65
        esi_5 = var_70
        *arg3 = esi_5
        
        if (esi_5 != 0 && *esi_5 != 0)
            char* eax_140 = sub_63d4e0(arg3)
            *(eax_140 + 4) += 1
        
        char* eax_141 = *eax_139
        char* const ecx_210 = &data_801800
        int32_t var_94_11 = 0x40000000
        
        if (eax_141 != 0)
            ecx_210 = eax_141
        
        var_a8 = ecx_210
        sub_63d960(arg3, var_a8)
        int32_t var_14_61 = 0x66
        
        if (data_cf65bc != 0)
            char* eax_142 = var_98
            
            if (eax_142 != 0 && *eax_142 != 0)
                char* eax_143 = sub_63d4e0(&var_98)
                int32_t temp12_1 = *(eax_143 + 4)
                *(eax_143 + 4) -= 1
                
                if (temp12_1 == 1)
                    sub_64c080(eax_143, *(eax_143 + 0xc) + 0x10)
                    var_98 = &data_801800
        
        int32_t var_14_62 = 0x67
    label_59f742:
        
        if (data_cf65bc == 0 || esi_5 == 0 || *esi_5 == 0)
            goto label_59e00e
        
        ecx_58 = &var_70
        goto label_59f763
    case 0x4f
        bool cond:22_1 = arg6[8] == 0
        char* ecx_215 = arg6[5]
        var_a8 = ecx_215
        int32_t var_b8_23
        int32_t* ecx_216
        
        if (cond:22_1)
            ecx_216 = &var_a8
            int32_t var_ac_92 = 0
            int32_t var_b0_92 = 1
            int32_t* var_b4_5 = eax_5
            
            var_b8_23 = ecx_215 == 0 ? 0x8b : 0x8c
        else
            ecx_216 = &var_a8
            int32_t var_ac_91 = 0
            int32_t var_b0_91 = 1
            int32_t* var_b4_4 = eax_5
            
            var_b8_23 = ecx_215 == 0 ? 0x8d : 0x8e
        
        sub_59aae0(eax_5, edx_3, ecx_216, arg8, arg6.b, var_b8_23)
        sub_59dcf0(arg3)
        goto label_59e00e
    case 0x50
        var_a8 = edx_2
        int32_t* var_ac_32 = eax_5
        sub_59d270(eax_5, edx_3, arg3, arg6, edx_2)
    label_59e00e:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(arg3)
        return arg3

var_a8 = "DomLogEventToLogLine"
sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 0xfc5, var_a8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
