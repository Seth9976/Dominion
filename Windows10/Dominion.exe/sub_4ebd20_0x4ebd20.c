// 函数: sub_4ebd20
// 地址: 0x4ebd20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

memcpy(arg3, arg2, 0x1a44)
memcpy(arg3 + 0x1a48, arg2 + 0x1a48, *(arg3 + 0x1520) * 0x64)
memcpy(arg3 + 0x152c8, arg2 + 0x152c8, *(arg3 + 0x19a4) << 5)
int32_t i_1 = 0

if (*(arg3 + 0xd38) s> 0)
    void* edi_1 = arg3 + 0x17578
    int32_t var_8_1 = arg2 + 0x18e78
    void* edx_1 = arg2 - arg3
    void* var_10_1 = edi_1
    void* var_14_1 = edx_1
    int32_t esi_1 = arg2 + 0x18e78
    int32_t i
    
    do
        __builtin_memcpy(edi_1 - 0x2b0, esi_1 - 0x1bb0, 0x2ac)
        memcpy(var_10_1, edx_1 + var_10_1, *(var_10_1 - 0x74) << 2)
        memcpy(var_10_1 + 0xc80, var_8_1 - 0xc80, *(var_10_1 - 0x64) << 2)
        memcpy(var_10_1 + 0x1900, var_8_1, *(var_10_1 - 0x4c) << 2)
        memcpy(var_10_1 + 0x2580, var_8_1 + 0xc80, *(var_10_1 - 0x34) << 2)
        memcpy(var_10_1 + 0x3200, var_8_1 + 0x1900, *(var_10_1 - 0x2c) << 2)
        memcpy(var_10_1 + 0x3e80, var_8_1 + 0x2580, *(var_10_1 - 0x28) << 2)
        memcpy(var_10_1 + 0x4b00, var_8_1 + 0x3200, *(var_10_1 - 0x24) << 2)
        edi_1 = var_10_1 + 0x5a30
        edx_1 = var_14_1
        i = i_1 + 1
        esi_1 = var_8_1 + 0x5a30
        i_1 = i
        var_10_1 = edi_1
        var_8_1 = esi_1
    while (i s< *(arg3 + 0xd38))

memcpy(arg3 + 0x38fe8, arg2 + 0x38fe8, *(arg3 + 0x19b0) << 2)
memcpy(arg3 + 0x39c68, arg2 + 0x39c68, *(arg3 + 0x1a08) << 3)
memcpy(arg3 + 0x3b568, arg2 + 0x3b568, *(arg3 + 0x19b8) * 0xa8)
*(arg3 + 0x5eb68) = 0xffffffff
*(arg3 + 0x1504) = 3
*(arg3 + 0x1518) = arg4
return arg4
