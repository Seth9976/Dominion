// 函数: sub_6e06e0
// 地址: 0x6e06e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771065
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** i_2 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx
int32_t var_20 = edx
int32_t* ebx = arg1
struct _EXCEPTION_REGISTRATION_RECORD** i_5 = *ebx
struct _EXCEPTION_REGISTRATION_RECORD** i_1

if (i_5 == 0)
    sub_69fd50(i_2, "!Null\Null", &i_1, 2)
    struct _EXCEPTION_REGISTRATION_RECORD** i_7 = i_5
    char* i_3 = i_1
    char* const i_4 = &data_801800
    
    if (i_3 != 0)
        i_4 = i_3
    
    i_2, arg1, edx = sub_69f030(i_4, i_5 + 2)
    i_5 = i_2
    int32_t var_8_1 = 1
    
    if (data_cf65bc != 0)
        i_2 = i_1
        
        if (i_2 != 0 && *i_2 != 0)
            i_2 = sub_63d4e0(&i_1)
            int32_t temp0_1 = i_2[1]
            i_2[1] -= 1
            i_2[1]
            
            if (temp0_1 == 1)
                i_2, arg1, edx = sub_64c080(i_2, &i_2[3][2])
                i_1 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
else if (i_5[1] != 2)
    sub_63b870(i_2, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

struct _EXCEPTION_REGISTRATION_RECORD** i_6 = i_5

if (*i_5 == 0)
    edx.b = 0
    sub_69f4a0(i_2, edx.b, i_5, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_3 = *i_5
i_5[7] = &i_5[7]->Next + 1
int32_t var_8_3 = 2
arg1.b = 0
struct _EXCEPTION_REGISTRATION_RECORD* Next = eax_3->Next->Next
struct _EXCEPTION_REGISTRATION_RECORD** i = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* Next_1 = Next
char var_11 = 0
i_1 = nullptr

if (ebx[0xc4] s> 0)
    void* edi_1 = &ebx[0x2d]
    
    do
        if (*(edi_1 - 4) != 0)
            var_11 = 1
            
            if (ebx[5] s<= 0)
                sub_63b870(i, &data_801800, "index >= 0 && index < mSize", 
                    "C:\x\ax2017\Engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t var_38_1 = ebx[4]
            int32_t var_3c_1 = var_20
            arg1 = sub_6df0f0(i, edi_1 + 0x104, arg1, arg1, edi_1, *(edi_1 + 0x100), 
                Next->__offset(0x18).d)
            i = i_1
            Next = Next_1
        
        i += 1
        edi_1 += 0x130
        i_1 = i
    while (i s< ebx[0xc4])
    
    arg1.b = var_11

if (i_5 != 0)
    i_5[7] -= 1

i.b = arg1.b
fsbase->NtTib.ExceptionList = ExceptionList
return i
