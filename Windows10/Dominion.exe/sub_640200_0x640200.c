// 函数: sub_640200
// 地址: 0x640200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_50
int32_t* var_84 = &var_50
QueryPerformanceCounter()
int32_t* edi = data_cf65b4
*edi = var_50
int32_t var_4c
edi[1] = var_4c
int32_t ebx = var_50
int32_t eax_2 = edi[2]
int32_t eax_3 = edi[3]
int32_t var_48
uint32_t var_44
void invalid
TEB* fsbase

if (data_1a98f58 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    int32_t* var_84_1 = &data_1a98f58
    sub_75970e()
    
    if (data_1a98f58 == 0xffffffff)
        int32_t* var_84_2 = &var_48
        QueryPerformanceFrequency()
        int32_t* var_84_3 = &data_1a98f58
        data_1a98f5c = 1f / __ultof3(var_48, var_44, invalid)
        __Init_thread_footer()
    
    edi = data_cf65b4

int32_t esi = edi[1]
edi[2] = *edi
edi[3] = esi
float xmm0_2 = __ultof3(ebx - eax_2, sbb.d(var_4c, eax_3, ebx u< eax_2), invalid)
void* esi_1 = data_147abe8
float xmm0_3 = data_8c422c
float var_5c_1 = xmm0_3
float xmm1_6 = xmm0_2 * 1000f f* data_1a98f5c * 0.00100000005f f+ edi[4]
edi[4] = xmm1_6
char ecx_4 = *(esi_1 + 0x24)

if (ecx_4 != 0)
    xmm0_3 = *(esi_1 + 0x34)
    var_5c_1 = xmm0_3

float xmm1_7 = xmm1_6 / xmm0_3
void* eax_7 = data_cf65b8
char var_5d = 0
int32_t var_88
int32_t ebx_2

if (eax_7 == 0 || *(eax_7 + 0x28) == 0 || ecx_4 != 0 || data_147d218 == 0 || data_147d254 == ecx_4)
    float xmm0_6 = sub_4d5cb0(xmm1_7)
    float xmm0_7
    
    if (0 f<= xmm0_6)
        xmm0_7 = xmm0_6 + 0.5f
    else
        xmm0_7 = xmm0_6 - 0.5f
    
    ebx_2 = int.d(xmm0_7)
    
    if (ebx_2 == 0)
        void* result = data_cf65b8
        
        if (result != 0 && *(result + 0x28) != ebx_2.b)
            return result
        
        int32_t var_84_4 = 1
        return Sleep()
    
    ecx_4 = 0
else
    if (not(0.75f <= xmm1_7))
        var_88 = (fconvert.d(xmm1_7)).d
        char const* const var_8c_1 = "update loop called to soon from vsync %f"
        sub_63b5f0("update loop called to soon from vsync %f")
        edi = data_cf65b4
        esi_1 = data_147abe8
    
    ecx_4 = 1
    float xmm1_8
    
    if (0 f<= xmm1_7)
        xmm1_8 = xmm1_7 + 0.5f
    else
        xmm1_8 = xmm1_7 - 0.5f
    
    ebx_2 = int.d(xmm1_8)
    
    if (ebx_2 == 0)
        ebx_2 = 1

int32_t eax_9 = 1

if (*(edi + 0x1b) == 0)
    eax_9 = 0x64

if (ebx_2 s> eax_9)
    ebx_2 = eax_9
    edi[4] = 0
else if (ecx_4 == 0)
    edi[4] = edi[4] f- _mm_cvtepi32_ps(zx.o(ebx_2)) * var_5c_1
else
    edi[4] = 0

if (*(esi_1 + 0x22) != 0)
    if (*(esi_1 + 0x23) == 0)
        return sub_688c00()
    
    *(esi_1 + 0x23) = 0
    ebx_2 = 1

int32_t* var_84_5 = &var_50
QueryPerformanceCounter()
sub_688010(ebx_2)
int32_t* var_84_6 = &var_48
QueryPerformanceCounter()
int32_t ecx_6 = var_48
uint32_t eax_12 = sub_63c000(ecx_6 - var_50, sbb.d(var_44, var_4c, ecx_6 u< var_50))
*(data_cf65b4 + 0x14) = ebx_2
(*(*data_cf65b8 + 0x2c))()
sub_6adca0()
int32_t* var_84_8 = &var_48
QueryPerformanceCounter()
int32_t ecx_10 = var_48
uint32_t eax_15
int32_t ecx_12
int32_t edx_5
eax_15, ecx_12, edx_5 = sub_63c000(ecx_10 - var_50, sbb.d(var_44, var_4c, ecx_10 u< var_50))

if (eax_15 s> 0x50)
    uint32_t var_84_10 = eax_15 - eax_12
    var_88 = eax_12
    uint32_t var_8c_2 = eax_15
    char const* const var_90_1 = "slow frame %dms sim %dms draw %dms"
    eax_15, ecx_12, edx_5 = sub_63b5f0("slow frame %dms sim %dms draw %dms")

char const* const var_84_11 = "Non-Update Loop"
return sub_6ca670(eax_15, edx_5, ecx_12)
