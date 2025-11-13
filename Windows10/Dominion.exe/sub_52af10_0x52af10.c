// 函数: sub_52af10
// 地址: 0x52af10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 2
uint32_t eax_6
int32_t ecx_4
eax_6, ecx_4 = sub_561d80(sub_56b800())

if (eax_6.b == 0)
    void* eax_8
    int32_t ecx_7
    eax_8, ecx_7 = sub_566890(0)
    int32_t var_94_2 = ecx_7
    int32_t var_98_2 = 0
    void* var_78 = eax_8
    sub_561e00(eax_8, 0, 1, var_98_2)
    int32_t var_74 = 0
    void* eax_9 = sub_573400()
    int32_t temp1_1 = mods.dp.d(sx.q(*(eax_9 + 0xc) + 1), *(*(eax_9 + 4) + 0xd38))
    int32_t* var_b4_1 = &var_74
    int32_t* var_b8 = &std::_Func_impl_no_alloc<class <lambda_8f6f1020db088c28e413edd61f937d18>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t** var_94_3 = &var_b8
    sub_5698b0(&var_b8, temp1_1, temp1_1, var_b8)
    
    if (eax_8 != 0)
        int32_t esi_2 = var_74
        
        if (esi_2 != 0)
            void* eax_14 = sub_573400()
            uint32_t esi_3 = zx.d(esi_2.w)
            int32_t ecx_10 = *(eax_14 + 0xc)
            void* edi_1 = *(eax_14 + 4)
            
            if (esi_3 u>= 0x320)
                sub_591930()
            
            int32_t eax_15 = esi_3 * 0x64
            int32_t var_88
            sub_576e90(eax_15, edi_1, &var_88, ecx_10, *(eax_15 + edi_1 + 0x1a4c), 0)
            void* eax_16 = sub_573400()
            int32_t ecx_12 = *(eax_16 + 0xc)
            void* edi_2 = *(eax_16 + 4)
            uint32_t esi_4 = zx.d(var_78.w)
            
            if (esi_4 u>= 0x320)
                sub_591930()
            
            int32_t eax_18 = esi_4 * 0x64
            sub_576e90(eax_18, edi_2, &var_78, ecx_12, *(eax_18 + edi_2 + 0x1a4c), 0)
            uint128_t var_70
            uint128_t xmm1_1 = *sub_576c00(&var_70, var_78)
            int64_t var_50_1 = xmm1_1.q
            uint32_t var_30[0x7]
            uint32_t* eax_20 = sub_576c00(&var_30, var_88)
            int32_t edx_5 = var_50_1.d
            int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 8)
            uint128_t xmm0_1 = *eax_20
            var_70 = xmm0_1
            int32_t ecx_14 = var_70:4.d
            int32_t esi_5 = var_70.d
            int32_t xmm0_2 = _mm_bsrli_si128(xmm0_1, 8)
            var_88 = xmm0_2
            int32_t eax_22 = var_50_1:4.d
            
            if (xmm1_2 s> xmm0_2 && edx_5 s>= esi_5 && eax_22 s>= ecx_14)
            label_52b10f:
                sub_561af0(sub_56e9c0(1), 0, 1, 0)
                void* eax_24 = sub_562100(1, 0)
                CookieCheckFunction(eax_24)
                return eax_24
            
            if (xmm1_2 s>= var_88)
                bool cond:1_1 = edx_5 s< esi_5
                
                if (edx_5 s> esi_5)
                    if (eax_22 s>= ecx_14)
                        goto label_52b10f
                    
                    cond:1_1 = edx_5 s< esi_5
                
                if (not(cond:1_1) && eax_22 s> ecx_14)
                    goto label_52b10f
else
    int32_t var_94_1 = ecx_4
    sub_561e00(eax_6, 0, 1, 0)

uint32_t eax_7 = sub_56e9c0(nullptr)
CookieCheckFunction(eax_7)
return eax_7
