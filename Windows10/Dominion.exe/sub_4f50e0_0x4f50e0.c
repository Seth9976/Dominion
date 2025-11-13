// 函数: sub_4f50e0
// 地址: 0x4f50e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
__security_cookie
void* __saved_ecx = arg1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* esi = *(arg2 + 0x50)
void* var_430 = arg2
void* var_41c = arg2
void* edi = *((esi << 2) + &data_1779f8c)
int32_t i_3 = 0xffffffff
sub_4f3ab0(arg2, edi, arg1)
void* eax_4 = sub_4f4c40(&i_3, esi, edi, &i_3)
float xmm2[0x2] = *(edi + (esi << 2) + 0x94)
float xmm3[0x2] = *(edi + (esi << 2))
char edx_2 = 0
int32_t i_1 = *(edi + 0xd4)
int32_t xmm1 = 0xc479c000
void* var_418 = eax_4
i_3 = 0xffffffff
int64_t xmm2_1 = _mm_cvtps_pd(xmm2)
int64_t xmm3_1 = _mm_cvtps_pd(xmm3)

if (i_1 s> 0)
    int32_t eax_6 = *(edi + 0xd0) + 0x4c
    int32_t i
    
    do
        bool cond:0_1 = *eax_6 s> 0
        eax_6 += 0x54
        
        if (cond:0_1)
            edx_2 = 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* eax_7 = *(edi + 0xd0)
    int32_t* esi_1 = eax_7 + 0x4c
    void* ebx_1 = var_418
    eax_4 = eax_7 + (esi << 2) + 0x1c
    
    do
        if (edx_2 == 0 || *esi_1 != 0)
            int32_t xmm0_1 = *eax_4
            
            if (not(xmm0_1 f<= xmm1))
                xmm1 = xmm0_1
                i_3 = i_1
        
        i_1 += 1
        esi_1 = &esi_1[0x15]
        eax_4 += 0x54
    while (i_1 s< *(edi + 0xd4))
    
    int32_t i_4 = i_3
    
    if (i_4 s>= 0)
        void* const eax_9 = &data_808fa0
        
        if (ebx_1 == i_4)
            eax_9 = &data_801800
        
        int32_t var_434
        var_434.q = xmm2_1
        int64_t var_43c_1 = xmm3_1
        void* const var_440 = eax_9
        void* const eax_10 = &data_808fa4
        
        if (*(edi + 0xdc) == 0)
            eax_10 = &data_801800
        
        void* const var_444 = eax_10
        void* var_448 = esi
        char const* const var_44c = "AI %d move %s%s(%f->%f): "
        void* ecx_1 = sub_4f7f30("AI %d move %s%s(%f->%f): ")
        int32_t eax_12 = ebx_1 * 0x54 + *(edi + 0xd0)
        int32_t var_450 = eax_12
        char var_40c[0x404]
        sub_4eb890(eax_12, &var_40c, ecx_1, edi)
        char (* var_458)[0x404] = &var_40c
        void* const var_45c = &data_808fc4
        sub_4f7f30("%s ")
        int32_t i_2 = 0
        
        if (*(edi + 0xd4) s> 0)
            int32_t ebx_2 = 0
            
            do
                if (i_2 == var_418)
                    void* const var_430_2 = &data_808fc8
                    sub_4f7f30(U"*")
                
                int32_t var_430_3 = *(ebx_2 + *(edi + 0xd0) + 0x38)
                void* const var_434_1 = &data_808fcc
                sub_4f7f30("%d ")
                i_2 += 1
                ebx_2 += 0x54
            while (i_2 s< *(edi + 0xd4))
            
            ebx_1 = var_418
        
        void* const var_430_4 = &data_808894
        sub_4f7f30(U"\n")
        int32_t ecx_2
        
        if (*(ebx_1 * 0x54 + *(edi + 0xd0) + 8) s<= 1)
            if (esi u>= 6)
                ___report_rangecheckfailure()
                noreturn
            
            ecx_2.b = 0
        else
            ecx_2.b = 1
        
        *(esi + 0x1779fa4) = ecx_2.b
        uint32_t result = sub_4f02f0(edi, ebx_1 * 0x54 + *(edi + 0xd0))
        CookieCheckFunction(result)
        return result

char const* const var_430_6 = "NodeMaxScore"
int32_t var_434_3 = 0x185f
char const* const var_438 = "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp"
sub_63b870(eax_4, &data_801800, "best_i >= 0")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
