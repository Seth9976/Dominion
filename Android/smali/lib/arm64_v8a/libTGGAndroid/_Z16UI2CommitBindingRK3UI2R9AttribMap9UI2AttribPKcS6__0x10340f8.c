// 函数: _Z16UI2CommitBindingRK3UI2R9AttribMap9UI2AttribPKcS6_
// 地址: 0x10340f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = AttribMapGetDef(*gUI2AttribTable, arg2, *macro_ptr_SpineSlotMappings, 0x110)
void* x20 = x0_1
int64_t x23

if (x0_1 != 0)
    x23 = sx.q(*(x20 + 8))
    
    if (x23.d s>= 1)
        goto label_1034190
    
    goto label_10341d4

AttribTable* x0_2 = *gUI2AttribTable
int64_t var_60 = 0
int64_t var_58_1 = 0
AttribMapSetDef(x0_2, arg2, 0x110, &var_60)
x20 = AttribMapGetDef(*gUI2AttribTable, arg2, *macro_ptr_SpineSlotMappings, 0x110)
x23 = sx.q(*(x20 + 8))
DefMap* x0_13
void* x8_3

if (x23.d s< 1)
label_10341d4:
    DefinitionVariableArrayAddItem(x20, DefFindField(*macro_ptr_SpineSlotMappings, 0), x23.d)
    int64_t x23_1 = x23 << 4
    DefinitionAssignString(*x20 + x23_1, arg4, DefFindField(*macro_ptr_SpineSlotMapping, 0))
    x0_13 = *macro_ptr_SpineSlotMapping
    x8_3 = *x20 + x23_1
else
label_1034190:
    int64_t* x26_1 = *x20
    int64_t x25_1 = 0
    int64_t x22_1 = 0
    
    while (true)
        if (strcmp(*(x26_1 + x25_1), arg4) == 0)
            XString::XString(&var_60)
            int32_t x0_19 = operator==(&var_60, arg5)
            XString::~XString()
            
            if ((x0_19 & 1) != 0)
                return DefinitionVariableArrayDeleteItem(x20, 
                    DefFindField(*macro_ptr_SpineSlotMappings, 0), x22_1.d, nullptr)
            
            x8_3 = *x20 + x25_1
            x0_13 = *macro_ptr_SpineSlotMapping
            break
        
        x22_1 += 1
        x25_1 += 0x10
        
        if (x22_1 s>= x23)
            goto label_10341d4

return DefinitionAssignString(x8_3 + 8, arg5, DefFindField(x0_13, 8))
