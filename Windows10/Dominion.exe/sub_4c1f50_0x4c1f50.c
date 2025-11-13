// 函数: sub_4c1f50
// 地址: 0x4c1f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@QBGI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg1

if (result u> 4)
    sub_63b870(result, &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x131c, 
        "GameDialogAddFriendResponse")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* result_2
char* result_3
char* result_4
char* result_5
char* result_6
char** ecx_10

switch (result)
    case 1
        int32_t var_8_7 = 0x18
        char* result_1
        sub_4d48c0(sub_4d47c0(&result_1, "dom_msg_add_friend_error_header"), 
            "dom_msg_add_friend_error_not_found_body", &result_5, "[username]", &data_8db800)
        var_8_7.b = 0x19
        sub_63d720(&result_3, &data_801800)
        var_8_7.b = 0x1a
        sub_63d720(&result_2, &data_801800)
        var_8_7.b = 0x1b
        data_8db6b0 = 0x20
        sub_63d850(&data_8db750, &result_1)
        sub_63d850(&data_8db754, &result_5)
        sub_63d850(&data_8db758, &result_2)
        result = sub_63d850(&data_8db75c, &result_3)
        data_8db760 = 0
        data_8db764 = 0
        var_8_7.b = 0x1c
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp3_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp3_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_7.b = 0x1d
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_3)
                int32_t temp7_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp7_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_7.b = 0x1e
        
        if (data_cf65bc != 0)
            result = result_5
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_5)
                int32_t temp11_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp11_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_5 = &data_801800
        
        int32_t var_8_8 = 0x1f
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                ecx_10 = &result_1
                goto label_4c20f3
    case 2
        sub_4d47c0(&result_4, "dom_msg_add_friend_error_header")
        int32_t var_8_5 = 0x10
        sub_4d47c0(&result_6, "dom_msg_add_friend_error_self_body")
        var_8_5.b = 0x11
        sub_63d720(&result_3, &data_801800)
        var_8_5.b = 0x12
        sub_63d720(&result_2, &data_801800)
        var_8_5.b = 0x13
        data_8db6b0 = 0x20
        sub_63d850(&data_8db750, &result_4)
        sub_63d850(&data_8db754, &result_6)
        sub_63d850(&data_8db758, &result_2)
        result = sub_63d850(&data_8db75c, &result_3)
        data_8db760 = 0
        data_8db764 = 0
        var_8_5.b = 0x14
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_5.b = 0x15
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_3)
                int32_t temp6_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp6_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_5.b = 0x16
        
        if (data_cf65bc != 0)
            result = result_6
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_6)
                int32_t temp10_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp10_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_6 = &data_801800
        
        int32_t var_8_6 = 0x17
        
        if (data_cf65bc != 0)
            result = result_4
            
            if (result != 0 && *result != 0)
                ecx_10 = &result_4
                goto label_4c20f3
    case 3
        int32_t var_8_1 = 0
        sub_4d48c0(sub_4d47c0(&result_3, "dom_msg_add_friend_error_header"), 
            "dom_msg_add_friend_error_blocked_body", &result_6, "[username]", &data_8db800)
        var_8_1.b = 1
        sub_63d720(&result_4, &data_801800)
        var_8_1.b = 2
        sub_63d720(&result_5, &data_801800)
        var_8_1.b = 3
        data_8db6b0 = 0x20
        sub_63d850(&data_8db750, &result_3)
        sub_63d850(&data_8db754, &result_6)
        sub_63d850(&data_8db758, &result_5)
        result = sub_63d850(&data_8db75c, &result_4)
        data_8db760 = 0
        data_8db764 = 0
        var_8_1.b = 4
        
        if (data_cf65bc != 0)
            result = result_5
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_5)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            result = result_4
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_4)
                int32_t temp4_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp4_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_1.b = 6
        
        if (data_cf65bc != 0)
            result = result_6
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_6)
                int32_t temp8_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp8_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_6 = &data_801800
        
        int32_t var_8_2 = 7
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                ecx_10 = &result_3
            label_4c20f3:
                result = sub_63d4e0(ecx_10)
                int32_t temp12_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp12_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
    case 4
        int32_t var_8_3 = 8
        sub_4d48c0(sub_4d47c0(&result_2, "dom_msg_add_friend_error_header"), 
            "dom_msg_add_friend_error_already_friends_body", &result_6, "[username]", &data_8db800)
        var_8_3.b = 9
        sub_63d720(&result_4, &data_801800)
        var_8_3.b = 0xa
        sub_63d720(&result_3, &data_801800)
        var_8_3.b = 0xb
        data_8db6b0 = 0x20
        sub_63d850(&data_8db750, &result_2)
        sub_63d850(&data_8db754, &result_6)
        sub_63d850(&data_8db758, &result_3)
        result = sub_63d850(&data_8db75c, &result_4)
        data_8db760 = 0
        data_8db764 = 0
        var_8_3.b = 0xc
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_3)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_3.b = 0xd
        
        if (data_cf65bc != 0)
            result = result_4
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_4)
                int32_t temp5_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp5_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_3.b = 0xe
        
        if (data_cf65bc != 0)
            result = result_6
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_6)
                int32_t temp9_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp9_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_6 = &data_801800
        
        int32_t var_8_4 = 0xf
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                ecx_10 = &result_2
                goto label_4c20f3

fsbase->NtTib.ExceptionList = ExceptionList
return result
