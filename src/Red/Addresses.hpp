#pragma once

// Generated by cp77ida.py on 2023-10-31 for Cyberpunk 2077 v.2.02
// DO NOT MODIFY. USE tools\ida\scan.py TO GENERATE THIS FILE.

#include <cstdint>

namespace Red::Addresses
{
constexpr uintptr_t ImageBase = 0x140000000;

constexpr uintptr_t Main = 0x1408B48E4 - ImageBase; // 40 55 53 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? FF 15 ? ? ? ? E8, expected: 1, index: 0
constexpr uintptr_t GetScriptGameInstance = 0x140C0BE10 - ImageBase; // 48 83 EC ? 48 FF 02 33 C9 48 8B 42 ? 48 85 C0 74 ? 48 BA 7B FF 43 56 41 00 00 00 48 39 10 75, expected: 1, index: 0

constexpr uintptr_t CBaseEngine_InitEngine = 0x140A5EC98 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? BA 02 00 00 00 33 C9 FF 15, expected: 1, index: 0

constexpr uintptr_t CGameFramework_InitializeGameInstance = 0x1416C45EC - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 4C 8B 4A ? 48 8B D9 BF ? ? ? ? 4D 85 C9 74 ? 65 48 8B 04 25 ? ? ? ? 4D 8B 09 4C 8B 00 41 8A 41 ? 42 88  04 07 48 8B 01 4C 8B C2, expected: 2, index: 0

constexpr uintptr_t CMesh_GetAppearance = 0x1401B79A0 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 83 38 00 74 ? 48 83 C4 ? 5B C3, expected: 1, index: 0

constexpr uintptr_t CommunitySystem_Update = 0x140251834 - ImageBase; // 48 89 5C 24 ? 55 56 57 41 56 41 57 48 8B EC 48 81 EC ? ? ? ? 8A DA 0F 29 74 24 ? 48 8D 91 ? ? ? ? 48 8B F1, expected: 1, index: 0

constexpr uintptr_t Entity_Attach = 0x14014F2F0 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC 60 C6 81 ? ? ? ? 03 48 8B F2 80 7A ? 00, expected: 1, index: 0
constexpr uintptr_t Entity_Detach = 0x140150988 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B D9 C6 81 ? ? ? ? 05 E8 ? ? ? ? 66 83 64 24 ? 00, expected: 1, index: 0
constexpr uintptr_t Entity_Dispose = 0x140356D94 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 8A 81 ? ? ? ? 48 8B F9 2C 02 3C 03 77 ? 48 8B 99, expected: 1, index: 0
constexpr uintptr_t Entity_Initialize = 0x140266438 - ImageBase; // 48 89 5C 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 ? ? ? ? 48 81 EC ? ? ? ? 8A 81 ? ? ? ? 4C 8D A1, expected: 1, index: 0
constexpr uintptr_t Entity_OnAssemble = 0x140773308 - ImageBase; // 48 89 5C 24 ? 57 48 81 EC ? ? ? ? 48 8B 02 48 8B FA 48 89 41 ? 48 8B D9 48 8B 42 ? 48 89 41 ? 48 8B 42, expected: 1, index: 0
constexpr uintptr_t Entity_Reassemble = 0x140C33A3C - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 4C 8B F2 49 8B F9 48, expected: 1, index: 0
constexpr uintptr_t Entity_Uninitialize = 0x14014EE48 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F1 C6 81 ? ? ? ? 06 48 81 C1 ? ? ? ? E8, expected: 1, index: 0

constexpr uintptr_t InkLayer_RegisterListener = 0x14096610C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8D 99 ? ? ? ? 48 8B E9 48 8B CB 48 8B F2 E8 ? ? ? ? 48 8B 46 08 33 FF 0F 57 C0 F3 0F 7F 44 24, expected: 2, index: 0
constexpr uintptr_t InkLayer_AttachWidgetTree = 0x140777450 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 83 65 ? 00 48 8D 05 ? ? ? ? 83 65 ? 00 48 8B FA 48 8B F1, expected: 2, index: 0

constexpr uintptr_t InkLogicController_OnInitialize = 0x14077787C - ImageBase; // 40 53 48 83 EC ? 48 8B 51 ? 48 8B D9 48 85 D2 75 ? 48 8D 4C 24 ? E8 ? ? ? ? 48 8B CB, expected: 1, index: 0
constexpr uintptr_t InkLogicController_OnUninitialize = 0x140553CB8 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 48 8D 4C 24 ? E8 ? ? ? ? 48 8B CB 48 8B 10 E8 ? ? ? ? 48 8B CB 48 83 C4, expected: 1, index: 0
constexpr uintptr_t InkLogicController_OnArrangeChildrenComplete = 0x1402E98D4 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B 05 ? ? ? ? 48 8B F9 80 B8 ? ? ? ? 00 75 ? 80 3D ? ? ? ? 00, expected: 1, index: 0

constexpr uintptr_t InkSpawner_FinishAsyncSpawn = 0x141B34050 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B F9 48 8B DA 48 8B 49 ? 48 81 C1 ? ? ? ? E8 ? ? ? ? 48 8B 13, expected: 1, index: 0

constexpr uintptr_t InkSystem_Instance = 0x14336D830 - ImageBase; // B9 ? ? 00 00 87 86 ? ? 00 00 48 89 35 ? ? ? ? E8, expected: 1, index: 0, offset: 14
constexpr uintptr_t InkSystem_ProcessCharacterEvent = 0x140BC93A0 - ImageBase; // 48 89 5C 24 ? 44 89 44 24 ? 55 48 8B EC 48 83 EC 50 44 8B D2 48 8B D9 48 81 C1 ? ? ? ? 48 8D 55 ? E8, expected: 1, index: 0
constexpr uintptr_t InkSystem_ProcessInputEvents = 0x14021AEA0 - ImageBase; // 48 8B C4 48 89 58 ? 55  56 57 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 70 ? 48 8B F9 0F 29 78, expected: 1, index: 0

constexpr uintptr_t InkWidget_GetLayer = 0x140222B04 - ImageBase; // 48 89 5C 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 8D 99 ? ? ? ? 48 8B FA 48 83 3B 00, expected: 1, index: 0
constexpr uintptr_t InkWidget_SetLayer = 0x14018F8B0 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F1 48 81 C1 ? ? ? ? E8, expected: 1, index: 0
constexpr uintptr_t InkWidget_ScriptReparent = 0x140EA8808 - ImageBase; // 48 89 5C 24 08 48 89 74 24 18 48 89 7C 24 20 55 48 8B EC 48 83 EC 40 48 8B 02 48 8D 35 ? ? ? ? 48 83 62 30 00 4C 8D 45 E0 48 83 62 38 00, expected: 4, index: 0
constexpr uintptr_t InkWidget_ScriptAddChild = 0x14216C580 - ImageBase; // 4C 8B DC 49 89 5B 08 49 89 73 18 57 48 83 EC 40 48 8B 02 4C 8D 15 ? ? ? ? 49 83 63 10 00 49 8B F0 48 83 62 30 00, expected: 1, index: 0
constexpr uintptr_t InkWidget_TriggerEvent = 0x1408ED3E8 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 49 8B F8 E8 ? ? ? ? 48 85 C0 75 ? 32 DB 48 8B CF E8, expected: 1, index: 0

constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromExternal = 0x140FAAEC4 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 49 8B D9 48 8D 54 24 ? E8 ? ? ? ? 48 8B 4C 24 ? 48 85 C9 74 ? 45 33 C9 4C 8B C3 48 8B D7 E8, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_AsyncSpawnFromLocal = 0x14077550C - ImageBase; // 48 83 EC ? 4C 8B D2 49 8B D0 E8 ? ? ? ? 48 85 C0 74 ? 45 8A C1 49 8B D2 48 8B C8 E8 ? ? ? ? B0 01 48 83 C4 ? C3, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_SpawnFromExternal = 0x140811580 - ImageBase; // 48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 49 8B D9 48 8D 54 24 ? E8 ? ? ? ? 48 8B 4C 24 ? 48 85 C9 74 ? 4C 8B C3 48 8B D7 E8, expected: 1, index: 0
constexpr uintptr_t InkWidgetLibrary_SpawnFromLocal = 0x140775538 - ImageBase; // 40 53 48 83 EC 20 48 8B DA 49 8B D0 E8 ? ? ? ? 48 85 C0 74 ? 48 8B D3 48 8B C8 E8, expected: 1, index: 0

constexpr uintptr_t IScriptable_InitializeScriptData = 0x1401C28D2 - ImageBase; // 48 89 51 30 4C 89 41 38 C3, expected: 1, index: 0

constexpr uintptr_t MeshAppearance_LoadMaterialSetupAsync = 0x1401B8384 - ImageBase; // 48 89 5C 24 ? 55 56 57 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 65 48 8B 04 25 ? ? ? ? 48 8B D9 B9 ? ? ? ? 0F 57 C0, expected: 1, index: 0

constexpr uintptr_t MorphTargetManager_ApplyMorphTarget = 0x1403803D0 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 57 48 83 EC ? 33 F6 0F 29 70 ? 40 88 70 ? 0F 28 F3 49 8B F8, expected: 1, index: 0

constexpr uintptr_t NodeRef_Create = 0x1401580EC - ImageBase; // 48 89 5C 24 ? 44 88 44 24 ? 55 56 57 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC ? 8B 72 08 4C 8B F1 85 F6, expected: 1, index: 0

constexpr uintptr_t PersistentObject_InitializeState = 0x140647C74 - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 48 8B 52 ? E8 ? ? ? ? 48 8B F0, expected: 1, index: 0

constexpr uintptr_t PlayerSystem_OnPlayerSpawned = 0x1409713B4 - ImageBase; // 48 89 5C 24 18 48 89 74 24 20 55 57 41 54 41 56 41 57 48 8B EC 48 83 EC 50 48 8B DA 48 8B F9, expected: 1, index: 0

constexpr uintptr_t QuestPhaseInstance_Initialize = 0x14027CFA4 - ImageBase; // 4C 89 4C 24 ? 4C 89 44 24 ? 55 53 56 57 41 54 41 55 41 56 41 57 48 8B EC 48 83 EC ? 33 C0 48 8D 9A ? ? ? ? 89 81 ? ? ? ? 48 8D 75, expected: 1, index: 0
constexpr uintptr_t QuestPhaseInstance_ExequteGraph = 0x1404D9A70 - ImageBase; // 4C 8B DC 49 89 5B ? 49 89 6B ? 49 89 73 ? 57 41 54 41 55 41 56 41 57 48 83 EC ? 49 8B 40 ? 4D 8B E9, expected: 1, index: 0
constexpr uintptr_t QuestPhaseInstance_ExecuteNode = 0x14027DD1C - ImageBase; // 48 89 5C 24 ? 48 89 6C 24 ? 56 57 41 56 48 83 EC ? 48 8B 02 48 8B E9 48 8B CA 49 8B D9 49 8B F8 48 8B F2, expected: 1, index: 0

constexpr uintptr_t QuestsSystem_CreateContext = 0x14027A6E4 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 68 ? 48 89 70 ? 48 89 78 ? 41 56 48 83 EC ? 48 8B 41 ? 4C 8D 91 ? ? ? ? 48 89 44 24, expected: 1, index: 0

constexpr uintptr_t RuntimeSystemWeather_SetWeatherByName = 0x1412E11E0 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 48 89 78 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 48 8B DA, expected: 1, index: 0
constexpr uintptr_t RuntimeSystemWeather_SetWeatherByIndex = 0x140AB09D8 - ImageBase; // 48 8B C4 48 89 58 ? 48 89 70 ? 55 57 41 56 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 70 ? 8B F2 0F 29 78 ? 48 8D 54 24, expected: 1, index: 0

constexpr uintptr_t ScriptBundle_dtor = 0x1404D2388 - ImageBase; // 40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 8D 8B ? ? ? ? FF 15 ? ? ? ? 48 8D 8B ? ? ? ? E8, expected: 1, index: 0

constexpr uintptr_t ScriptValidator_CompareTypeName = 0x14090D75C - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B DA 48 8B F9 48 3B CA 75 ? 40 B6 01, expected: 1, index: 0

constexpr uintptr_t VehicleSystem_ToggleGarageVehicle = 0x141406BF8 - ImageBase; // 48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F2 48 8B D9 48 8D 91 ? ? ? ? 41 8A F8 48 8D 4C 24 ? E8, expected: 1, index: 0
}
