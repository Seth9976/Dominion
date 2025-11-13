// 函数: sub_6b9340
// 地址: 0x6b9340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t esi = data_19e3ba0
TEB* fsbase
void* edi = *fsbase->ThreadLocalStoragePointer

if (esi s> *(edi + 8))
    sub_75970e(&data_19e3ba0)
    esi = data_19e3ba0
    
    if (esi == 0xffffffff)
        data_19e3b9c = 0x3c8efa35
        __Init_thread_footer(&data_19e3ba0)
        esi = data_19e3ba0

float xmm0_3 = arg2.d f* data_19e3b9c * 0.5f
float xmm0_4 = sub_4ae0d0(ebp, xmm0_3)
float xmm0_6 = sub_4ae0f0(ebp, xmm0_3)
float xmm1_1 = xmm0_6 * 0f

if (esi s> *(edi + 8))
    sub_75970e(&data_19e3ba0)
    esi = data_19e3ba0
    
    if (esi == 0xffffffff)
        data_19e3b9c = 0x3c8efa35
        __Init_thread_footer(&data_19e3ba0)
        esi = data_19e3ba0

float xmm0_9 = arg2:4.d f* data_19e3b9c * 0.5f
float xmm0_10 = sub_4ae0d0(ebp, xmm0_9)
float xmm0_12 = sub_4ae0f0(ebp, xmm0_9)
float xmm4_1 = xmm0_12 * 0f

if (esi s> *(edi + 8))
    sub_75970e(&data_19e3ba0)
    
    if (data_19e3ba0 == 0xffffffff)
        data_19e3b9c = 0x3c8efa35
        __Init_thread_footer(&data_19e3ba0)

float xmm0_15 = arg3 f* data_19e3b9c * 0.5f
float xmm0_16 = sub_4ae0d0(ebp, xmm0_15)
float xmm0_18 = sub_4ae0f0(ebp, xmm0_15)
float xmm1_3 = xmm4_1 * xmm1_1
float xmm4_3 = xmm1_1 * xmm0_10
float xmm3_1 = xmm0_18 * 0f
float xmm0_20 = xmm4_1 * xmm0_6
float xmm5_1 = xmm4_1 * xmm0_4
float xmm2_1 = xmm1_1 * xmm0_12
float xmm6_4 = xmm0_10 * xmm0_4 - xmm2_1 - xmm1_3 - xmm0_20
float xmm7_4 = xmm0_12 * xmm0_4 + xmm4_3 + xmm0_20 - xmm1_3
float xmm5_4 = xmm5_1 + xmm4_3 + xmm1_3 - xmm0_12 * xmm0_6
float xmm4_5 = xmm3_1 * xmm7_4
float xmm0_27 = xmm0_10 * xmm0_6 + xmm5_1 + xmm2_1 - xmm1_3
float xmm3_2 = xmm3_1 * xmm0_27
float xmm0_31 = xmm3_1 * xmm5_4
float xmm2_3 = xmm3_1 * xmm6_4
float var_28 = xmm0_16 * xmm6_4 - xmm4_5 - xmm0_18 * xmm5_4 - xmm3_2
int64_t var_34
var_34.d = xmm0_16 * xmm7_4 + xmm2_3 + xmm0_18 * xmm0_27 - xmm0_31
var_34:4.d = xmm0_18 * xmm6_4 + xmm0_16 * xmm5_4 + xmm4_5 - xmm3_2
float var_2c_1 = xmm0_16 * xmm0_27 + xmm2_3 + xmm0_31 - xmm0_18 * xmm7_4
*arg1 = var_34.o
return arg1
