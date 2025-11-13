// 函数: sub_666610
// 地址: 0x666610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d35a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0x16e8)

if (ecx != 0 && *(arg1 + 0xc) != *(ecx + 0xc))
    int32_t eax_4 = *(arg1 + 0x15e8)
    *(arg1 + 0x16f4) = 0
    *(arg1 + 0x15f0) = eax_4
    *(arg1 + 0xc) = *(ecx + 0xc)

struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_a8)(struct _EXCEPTION_REGISTRATION_RECORD**
    * arg1) = sub_63d770
int32_t var_68[0x11]
int32_t var_a8_1 = `eh vector constructor iterator'(&var_68, 4, 0x10, 0x5a0be0)
int32_t var_14_1 = 0
int32_t eax_6 = sub_64c230(arg2, &var_68)
int32_t var_70 = eax_6

if (*(arg1 + 0x16f8) == 0)
    *(arg1 + 0x16f0) = sub_64c020(0x1c00)
    eax_6 = var_70
    *(arg1 + 0x16f4) = 0
    *(arg1 + 0x16f8) = 0x100

int32_t esi_1 = 0
int32_t var_6c = 0

if (eax_6 s> 0)
    do
        char* _Str2_2 = var_68[esi_1]
        char* const _Str2 = &data_801800
        void* esi_2 = data_147abd8
        int32_t var_8c_1 = 0xffffffff
        
        if (_Str2_2 != 0)
            _Str2 = _Str2_2
        
        char* const _Str2_1 = _Str2
        int128_t var_88_1 = zx.o(0)
        var_88_1.d = 0
        void* var_90_1
        int32_t esi_3
        
        if (esi_2 == 0)
        label_666741:
            void*** eax_9 = operator new(0x10)
            void*** var_94_1 = eax_9
            esi_3 = var_6c
            char* edx_1 = &data_801800
            var_14_1.b = 1
            char* ecx_3 = var_68[esi_3]
            
            if (ecx_3 != 0)
                edx_1 = ecx_3
            
            var_14_1.b = 0
            var_90_1 = sub_64c140(eax_9, edx_1)
        else
            while (_stricmp(*(esi_2 + 8), _Str2) != 0)
                esi_2 = *(esi_2 + 4)
                _Str2 = _Str2_1
                
                if (esi_2 == 0)
                    goto label_666741
            
            if (esi_2 == 0)
                goto label_666741
            
            var_90_1 = esi_2
            esi_3 = var_6c
        
        int32_t eax_11 = *(arg1 + 0x16f4)
        var_88_1:0xc.d = 0x3f800000
        
        if (eax_11 s>= *(arg1 + 0x16f8))
            sub_63b870(eax_11, &data_801800, "mSize < mSizeReserved", 
                "C:\x\ax2017\Engine\xArray.h", 0x96, "XArray<struct UI2State>::Append")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        esi_1 = esi_3 + 1
        int32_t ecx_6 = eax_11 * 7
        var_6c = esi_1
        int32_t eax_12 = *(arg1 + 0x16f0)
        *(eax_12 + (ecx_6 << 2)) = var_90_1.o
        *(eax_12 + (ecx_6 << 2) + 0x10) = var_88_1:8.q
        *(eax_12 + (ecx_6 << 2) + 0x18) = 0
        *(arg1 + 0x16f4) += 1
    while (esi_1 s< var_70)

int32_t var_14_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_63d770)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
