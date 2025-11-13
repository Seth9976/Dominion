// 函数: _Z23DefParseReadSimpleFieldPvPK6DefMapPK8DefFieldP12DefParseItem
// 地址: 0xc8b704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg4 + 0x20) = arg3
uint64_t x8_1 = zx.q(*(arg2 + 0x18) - 1)
int32_t var_40
char* s
char* s_1
int32_t* result
char* s_2
char* s_3
char* format
char* format_1
char* format_2
char* format_3
void* x3
void* x3_1
void* x3_3
void* x4_1
void* x4_2
void* x5_1

if (x8_1.d u<= 0x2a)
    switch (x8_1)
        case 0
            int32_t x8_2 = *(arg3 + 0x50)
            
            if ((x8_2 & 0x22) == 0)
                s_2 = XString::operator char const*()
                format_2 = &data_71d7a6
                goto label_c8ba7c
            
            AttribTable* x23_1 = *(arg3 + 0x38)
            
            if ((x8_2 & 0x20) != 0)
                result = AttribTagFindByTagName(x23_1, XString::operator char const*())
                
                if (result.d == 0xffffffff)
                    goto label_c8ba88
                
                *arg1 = result.d
                return result
            
            if (x23_1 == 0)
                goto label_c8ba88
            
            result = SymbolMapLookupValue(x23_1, XString::operator char const*())
            
            if (result == 0)
                goto label_c8ba88
            
            *arg1 = *result
            return result
        case 1
            result = sscanf(XString::operator char const*(), "%d", &var_40)
            *arg1 = var_40.w
            
            if (result.d == 1)
                return result
            
        label_c8ba88:
            *(arg3 + 8)
            XString::operator char const*()
            XTrace("DefParse: failed to read '%s': %s")
            return DefinitionFillArrayableFieldWithDefaults(arg1, arg2, arg3)
        case 2
            result = sscanf(XString::operator char const*(), "%d", &var_40)
            *arg1 = var_40.b
            
            if (result.d != 1)
                goto label_c8ba88
            
            return result
        case 3
            s_2 = XString::operator char const*()
            format_2 = &data_79a4db
        label_c8ba7c:
            result = sscanf(s_2, format_2, arg1)
            
            if (result.d == 1)
                return result
            
            goto label_c8ba88
        case 7
            int64_t x0_15 = XMalloc(XString::Length() + 1)
            *arg1 = x0_15
            return strcpy(x0_15, XString::operator char const*()) __tailcall
        case 9
            result = sscanf(XString::operator char const*(), "%d", &var_40)
            *arg1 = (var_40 != 0 ? 1 : 0).b
            
            if (result.d != 1)
                goto label_c8ba88
            
            return result
        case 0xd
            result = sscanf(XString::operator char const*(), "%lld", &var_40)
            *arg1 = var_40.q
            
            if (result.d != 1)
                goto label_c8ba88
            
            return result
        case 0xe
            result = DefParseReadAssetPtr(arg1, arg4)
            
            if ((result.d & 1) == 0)
                goto label_c8ba88
            
            return result
        case 0xf
            s_2 = XString::operator char const*()
            format_2 = &data_768bd2
            goto label_c8ba7c
        case 0x14, 0x1d
            s = XString::operator char const*()
            x3 = arg1 + 4
            x4_1 = arg1 + 8
            x5_1 = arg1 + 0xc
            format = "%d %d %d %d"
            goto label_c8b7ac
        case 0x15, 0x18, 0x27
            s = XString::operator char const*()
            x3 = arg1 + 4
            x4_1 = arg1 + 8
            x5_1 = arg1 + 0xc
            format = "%f %f %f %f"
        label_c8b7ac:
            result = sscanf(s, format, arg1, x3, x4_1, x5_1)
            
            if (result.d != 4)
                goto label_c8ba88
            
            return result
        case 0x16
            s_3 = XString::operator char const*()
            x3_3 = arg1 + 4
            format_3 = "%f %f"
        label_c8ba08:
            result = sscanf(s_3, format_3, arg1, x3_3)
            
            if (result.d != 2)
                goto label_c8ba88
            
            return result
        case 0x17, 0x22, 0x29
            s_1 = XString::operator char const*()
            x3_1 = arg1 + 4
            x4_2 = arg1 + 8
            format_1 = "%f %f %f"
        label_c8b7d8:
            result = sscanf(s_1, format_1, arg1, x3_1, x4_2)
            
            if (result.d != 3)
                goto label_c8ba88
            
            return result
        case 0x19
            result = sscanf(XString::operator char const*(), "%f %f %f %f %f %f", arg1, arg1 + 4, 
                arg1 + 8, arg1 + 0xc, arg1 + 0x10, arg1 + 0x14)
            
            if (result.d != 6)
                goto label_c8ba88
            
            return result
        case 0x1a
            result = sscanf(XString::operator char const*(), "%f %f %f %f %f %f %f %f", arg1, 
                arg1 + 4, arg1 + 8, arg1 + 0xc, arg1 + 0x10, arg1 + 0x14, arg1 + 0x18, arg1 + 0x1c)
            
            if (result.d != 8)
                goto label_c8ba88
            
            return result
        case 0x1b
            s_3 = XString::operator char const*()
            x3_3 = arg1 + 4
            format_3 = "%d %d"
            goto label_c8ba08
        case 0x1c, 0x2a
            s_1 = XString::operator char const*()
            x3_1 = arg1 + 4
            x4_2 = arg1 + 8
            format_1 = "%d %d %d"
            goto label_c8b7d8
        case 0x28
            int32_t var_38
            int32_t var_34
            result = sscanf(XString::operator char const*(), "%d %d %d %d", &var_40, &var_40 | 4, 
                &var_38, &var_34)
            char var_3c
            *arg1 = (0xffffff & ((0xff00ffff & ((0xffff00ff & zx.d(var_40.b)) | zx.d(var_3c) << 8))
                | zx.d(var_38.b) << 0x10)) | zx.d(var_34.b) << 0x18
            
            if (result.d != 4)
                goto label_c8ba88
            
            return result
pthread_kill(pthread_self(), 6)
DefField* x0_42
void* x1_7
int32_t x2_14
int32_t* x3_7
DefParseTree* x4_7
x0_42, x1_7, x2_14, x3_7, x4_7 = XNoReturn()
return DefParseReadArray(x0_42, x1_7, x2_14, x3_7, x4_7) __tailcall
