// 函数: sub_5840a0
// 地址: 0x5840a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7674c7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx
uint32_t edx
ecx, edx = __chkstk(0x19d8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = ecx
int32_t var_1950 = eax_3
int32_t var_cb0[0x314]
__builtin_memcpy(&var_cb0, arg3, 0xc84)
void* var_193c
void var_5c
int32_t edi
int32_t var_30

if (arg5 == 0)
    edi = var_30
else
    int32_t var_198c_1 = eax_3
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9dcc324223f7c8c8be3b65cbf51a1ceb>,bool,enum CardID>::VTable
        * const var_1990 = &std::_Func_impl_no_alloc<class <lambda_9dcc324223f7c8c8be3b65cbf51a1ceb>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9dcc324223f7c8c8be3b65cbf51a1ceb>,bool,enum CardID>::VTable
        * const* var_196c_1 = &var_1990
    int32_t* eax_4 = &var_193c
    int32_t var_14_1 = 0
    int32_t* var_30_1 = &var_193c
    int32_t var_34_1 = 0
    var_193c = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_196c_1 != 0)
        eax_4 = (*var_196c_1)->vFunc_0(&var_5c)
        int32_t* var_38_2 = eax_4
    
    var_14_1.b = 0
    edi = GSI1::OffForSym(eax_4, var_30_1, &var_cb0)
    int32_t var_30_2 = edi
    
    if (var_196c_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9dcc324223f7c8c8be3b65cbf51a1ceb>,bool,enum CardID>::VTable
            * const* eax_8
        eax_8.b = var_196c_1 != &var_1990
        (*var_196c_1)->vFunc_4(eax_8)
        int32_t var_196c_2 = 0
    
    eax_3 = var_1950
int32_t var_19b4 = eax_3
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_dacad5916336d2c583a5a63ff3f63ac8>,bool,enum CardID>::VTable
    * const var_19b8 = &std::_Func_impl_no_alloc<class <lambda_dacad5916336d2c583a5a63ff3f63ac8>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_dacad5916336d2c583a5a63ff3f63ac8>,bool,enum CardID>::VTable
    * const* var_1994 = &var_19b8
int32_t var_14_2 = 3
void** var_30_4 = &var_193c
int32_t var_34_2 = 0
int32_t (* eax_9)[0x314] = &var_cb0
var_193c = &var_5c
int32_t var_38_3 = 0
var_14_2.b = 5

if (var_1994 != 0)
    int32_t var_38_4 = (*var_1994)->vFunc_0(&var_5c)
    eax_9 = &var_cb0

var_14_2.b = 3
int32_t var_14_3 = 0xffffffff
int32_t* edi_1 = GSI1::OffForSym(eax_9, edi, &var_cb0)
int32_t* var_30_5 = edi_1

if (var_1994 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_dacad5916336d2c583a5a63ff3f63ac8>,bool,enum CardID>::VTable
        * const* eax_14
    eax_14.b = var_1994 != &var_19b8
    (*var_1994)->vFunc_4(eax_14)
    int32_t var_1994_1 = 0

uint32_t result = arg2
uint32_t var_19f8[0x6]
uint32_t (* var_34_3)[0x6] = &var_19f8
*(result + 0xc80) = 0
uint128_t xmm0 = *sub_576c00(var_34_3, arg4)
int96_t var_1968 = xmm0.12
int32_t xmm0_1 = _mm_bsrli_si128(xmm0, 4)
int32_t* eax_17 = xmm0_1 - *(edx * 0x5a30 + var_1950 + 0x17500)
char const* const var_38_5
int32_t var_34_4
char const* const var_30_8
char* ecx_8

if (eax_17 s<= 0)
label_5843e6:
    void* var_1940_1 = var_1968.d + var_1968:8.d
    eax_17 = _aligned_malloc(0x5f080, 0x10)
    
    if (eax_17 != 0)
        sub_4ebd20(eax_17, var_1950, eax_17, edx)
        int32_t ecx_14 = 0
        int32_t var_1944_2 = 0
        eax_17[0x541] = 6
        void* ecx_16
        
        if (edi_1 s<= 0)
        label_58456c:
            ecx_16 = var_1940_1
        label_584572:
            
            if (ecx_16 s> 0)
            label_58457a:
                int32_t eax_41 = 0
                int32_t var_1944_3 = 0
                
                if (edi_1 s> 0)
                    do
                        void* eax_36 = var_cb0[eax_41]
                        void* var_30_17 = ecx_16
                        var_193c = eax_36
                        var_1940_1 -= sub_584010(eax_36)
                        
                        if (*(result + 0xc80) s>= 0x320)
                            sub_591930()
                        
                        void* ecx_21 = var_193c
                        char var_30_18 = 0
                        *(result + (*(result + 0xc80) << 2)) = ecx_21
                        *(result + 0xc80) += 1
                        var_193c = ecx_21
                        ecx_16 = sub_586880(&var_193c, edx, eax_17, &var_193c, 1, var_30_18)
                        
                        if (var_1940_1 s<= 0)
                            break
                        
                        eax_41 = var_1944_3 + 1
                        var_1944_3 = eax_41
                    while (eax_41 s< edi_1)
            
            _aligned_free(eax_17)
            int32_t eax_43 = arg6 + var_1968:8.d
            
            if (var_1940_1 s> eax_43)
                sub_63b870(eax_43, &data_801800, "targetCost <= coffers + parsedCost.debt", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x2df5, "ComputeBuyMinTreasures")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        void* var_1954_1
        void* edx_11
        
        while (true)
            edx_11 = var_cb0[ecx_14]
            uint32_t eax_28 = zx.d(edx_11.w)
            var_1954_1 = edx_11
            var_193c = eax_28
            
            if (eax_28 u>= 0x320)
                sub_591930()
                ecx_14 = var_1944_2
                edx_11 = var_1954_1
                eax_28 = var_193c
            
            result = arg2
            
            if (*(eax_28 * 0x64 + var_1950 + 0x1a4c) == 0x105)
                break
            
            ecx_14 += 1
            var_1944_2 = ecx_14
            
            if (ecx_14 s>= edi_1)
                goto label_58456c
        
        if (edx_11 == 0)
            goto label_58456c
        
        int32_t var_30_14 = ecx_14
        uint32_t eax_30 = sub_584010(edx_11)
        ecx_16 = var_1940_1
        var_193c = eax_30
        
        if (ecx_16 s< 2)
            goto label_584572
        
        if (eax_30 s<= 2)
            goto label_58457a
        
        int32_t ecx_17 = 0
        
        if (edi_1 s> 0)
            void* eax_31 = var_1954_1
            var_1954_1 = eax_31
            
            do
                if (var_cb0[ecx_17] == eax_31)
                    var_cb0[ecx_17] = var_cb0[edi_1 - 1]
                    edi_1 -= 1
                    break
                
                ecx_17 += 1
            while (ecx_17 s< edi_1)
        
        if (*(result + 0xc80) s>= 0x320)
            sub_591930()
        
        char var_30_16 = 0
        *(result + (*(result + 0xc80) << 2)) = var_1954_1
        var_1940_1 -= var_193c
        *(result + 0xc80) += 1
        var_193c = var_1954_1
        sub_586880(&var_193c, edx, eax_17, &var_193c, 1, var_30_16)
        goto label_58456c
    
    var_30_8 = "XMalloc"
    var_34_4 = 0x57
    var_38_5 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_8 = "pBuffer"
else if (xmm0_1 == 1)
    int32_t var_cb8 = 0
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e2951a826903492ba7d162695910f485>,bool,enum CardID>::VTable
        * const var_19e0 = &std::_Func_impl_no_alloc<class <lambda_e2951a826903492ba7d162695910f485>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t var_19dc_1 = var_1950
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e2951a826903492ba7d162695910f485>,bool,enum CardID>::VTable
        * const* var_19bc_1 = &var_19e0
    int32_t var_14_4 = 6
    int32_t* var_30_9 = &var_cb8
    int32_t var_1938
    int32_t* var_34_5 = &var_1938
    int32_t (* eax_18)[0x314] = &var_cb0
    int32_t var_38_6 = 0
    var_14_4.b = 7
    
    if (var_19bc_1 != 0)
        *(&var_5c + 0x24) = (*var_19bc_1)->vFunc_0(&var_5c)
        eax_18 = &var_cb0
    
    var_14_4.b = 6
    eax_17 = GSI1::OffForSym(eax_18, edi_1, &var_cb0)
    int32_t var_14_5 = 0xffffffff
    edi_1 = eax_17
    int32_t* var_30_10 = edi_1
    
    if (var_19bc_1 != 0)
        eax_17 = (*var_19bc_1)->vFunc_4(var_19bc_1 != &var_19e0)
        int32_t var_19bc_2 = 0
    
    if (var_cb8 s> 0)
        if (*(result + 0xc80) s>= 0x320)
            sub_591930()
        
        *(result + (*(result + 0xc80) << 2)) = var_1938
        *(result + 0xc80) += 1
        goto label_5843e6
    
    var_30_8 = "ComputeBuyMinTreasures"
    var_34_4 = 0x2dcb
    var_38_5 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx_8 = "potions.numCards > 0"
else
    var_30_8 = "ComputeBuyMinTreasures"
    var_34_4 = 0x2dc7
    var_38_5 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx_8 = "parsedCost.potions == 1"

sub_63b870(eax_17, &data_801800, ecx_8, var_38_5, var_34_4, var_30_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
