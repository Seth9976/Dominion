// 函数: sub_6b8440
// 地址: 0x6b8440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770011
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_334 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_20 = esi
int32_t var_14 = 0
int32_t var_18 = 0
void* eax_3 = data_147abe8
char const* const var_340
int32_t var_33c
char const* const var_338
char* ecx

if (eax_3 != 0)
    int32_t* ebx_1 = esi + 8
    void* edi_1 = *(eax_3 + 0x10)
    
    if (*(esi + 0x10) == 0)
    label_6b8577:
        int32_t var_8_4 = 2
        sub_6c3440(ebx_1)
        uint32_t result = zx.d(*(esi + 0x78))
        int32_t ecx_7 = *(edi_1 + 0xc)
        *(edi_1 + 0xc) = result
        *(esi + 0x78) = ecx_7
        *(edi_1 + 0x10) -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    while (true)
        void* edi_2 = *ebx_1
        
        if (edi_2 == 0)
            var_338 = "XList<struct ParticleEmitter>::GetHead"
            var_33c = 0x53
            var_340 = "C:\x\ax2017\Engine\xList.h"
            ecx = "mpHead != NULL"
            break
        
        void* esi_1 = nullptr
        
        while (true)
            if (esi_1 != 0)
                esi_1 = *(esi_1 + 0x2fc)
            else
                esi_1 = *(edi_2 + 0x2d0)
            
            if (esi_1 == 0)
                break
            
            sub_6b8400(esi_1)
        
        sub_6c3440(edi_2 + 0x2d0)
        void* eax_4 = *(edi_2 + 0x2e4)
        *(eax_4 + 0x14) -= 1
        int32_t var_8_1 = 0
        int32_t* edx_1 = *ebx_1
        void* eax_5 = edx_1[0xbf]
        *ebx_1 = eax_5
        
        if (eax_5 == 0)
            ebx_1[1] = 0
        else
            *(eax_5 + 0x300) = 0
        
        void var_324
        __builtin_memcpy(&var_324, edx_1, 0x2fc)
        ebx_1[2] -= 1
        int32_t esi_4 = var_14 | 1
        int32_t var_18_1 = esi_4
        boost::exception::~exception(edx_1)
        sub_64c080(edx_1, 0x304)
        var_14 = esi_4 & 0xfffffffe
        int32_t var_8_2 = 1
        void var_54
        eax_3 = sub_6c3440(&var_54)
        esi = var_20
        int32_t var_8_3 = 0xffffffff
        
        if (*(esi + 0x10) == 0)
            goto label_6b8577
else
    var_338 = "GetGameData"
    var_33c = 0x45
    var_340 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(eax_3, &data_801800, ecx, var_340, var_33c, var_338)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
