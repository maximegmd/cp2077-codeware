from cp77ida import Item, Group, Output, scan
from pathlib import Path


# Defines patterns and output files
def patterns():
    return [
        Output(filename="src/Red/Addresses.hpp", namespace="Red::Addresses", groups=[
            Group(functions=[
                Item(name="Main",
                     pattern="40 53 48 81 EC ? ? ? ? FF 15 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ?"),
                Item(name="GetScriptGameInstance",
                     pattern="40 53 48 83 EC 40 48 FF 02 33 C9 48 8B 42 28 49 8B D8 48 85 C0 74"),
            ]),
            Group(name="CBaseEngine", functions=[
                Item(name="InitEngine",
                     pattern="48 89 5C 24 10 55 56 41 56 48 8D 6C 24 B9 48 81 EC F0 00 00 00 4C 8B F2 48 8B F1 E8"),
            ]),
            Group(name="Entity", functions=[
                Item(name="GetComponents",
                     pattern="48 83 C1 70 E9",
                     expected=7,
                     index=1),
            ]),
            Group(name="InkLayer", functions=[
                Item(name="RegisterListener",
                     pattern="48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 40 48 8B F1 48 8B FA 48 81 C1 30 01 00 00 E8",
                     expected=2),
                Item(name="AttachWidgetTree",
                     pattern="48 89 5C 24 10 48 89 74 24 20 55 57 41 56 48 8B EC 48 83 EC 70 4C 8B F1 49 8B D8 48 8D 4D 30",
                     expected=2,
                     index=1),
            ]),
            Group(name="InkSpawner", functions=[
                Item(name="FinishAsyncSpawn",
                     pattern="48 89 5C 24 10 57 48 83 EC 30 48 8B 42 08 48 8B DA 4C 8B 0A 48 8B F9 4C 8B 41 18 4C 89 4C 24 20"),
            ]),
            Group(name="InkLogicController", functions=[
                Item(name="OnInitialize",
                     pattern="48 89 5C 24 10 57 48 83 EC 40 48 83 79 70 00 48 8B D9 0F 84 ? ? ? ? 48 8B 41 48 0F 57 C0"),
                Item(name="OnUninitialize",
                     pattern="48 89 5C 24 08 57 48 83 EC 30 80 3D ? ? ? ? ? 48 8B D9 48 BF A9 69 90 5E 8F CE E7 D3 75"),
                Item(name="OnArrangeChildrenComplete",
                     pattern="40 53 48 83 EC 30 48 8B D9 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 84 C0 75 ? 38 ? ? ? ? ? 48 89 7C 24 40 48 BF 34 F1 16 6B BE 7B 6A 4B"),
            ]),
            Group(name="InkWidget", functions=[
                Item(name="GetLayer",
                     pattern="48 8B C4 55 41 57 48 8D 68 A1 48 81 EC A8 00 00 00 48 83 B9 48 01 00 00 00 4C 8B FA 4C 89 70 D8"),
                Item(name="SetLayer",
                     pattern="48 89 5C 24 08 57 48 83 EC 30 48 8B F9 48 81 C1 48 01 00 00 E8 ? ? ? ? 48 8D 8F F5 01 00 00 E8"),
                Item(name="ScriptReparent",
                     pattern="48 89 5C 24 08 48 89 6C 24 18 56 57 41 56 48 83 EC 50 48 8B 02 4C 8D 35 ? ? ? ? FE 42 62 33 ED 0F 57 C0 48 89 6A 30 F3 0F 7F 44 24 38"),
                Item(name="ScriptAddChild",
                     pattern="48 89 5C 24 08 57 48 83 EC 40 FE 42 62 4C 8D 15 ? ? ? ? 33 C0 0F 57 C0 48 89 42 30 48 8B F9 48 8B 4A 40 45 33 C9 48 89 42 38 48 8B DA",
                     expected=17),
            ]),
            Group(name="InkWidgetLibrary", functions=[
                Item(name="AsyncSpawnFromExternal",
                     pattern="48 89 5C 24 08 57 48 83 EC 40 48 8B FA 49 8B D9 48 8D 54 24 28 E8 ? ? ? ? 48 8B 4C 24 28 48 85 C9 74 ? 48 8B D3 E8",
                     expected=2,
                     index=0),
                Item(name="AsyncSpawnFromLocal",
                     pattern="48 89 5C 24 08 57 48 83 EC 20 48 8B FA 41 0F B6 D9 49 8B D0 E8 ? ? ? ? 48 85 C0 74"),
                Item(name="SpawnFromExternal",
                     pattern="48 89 5C 24 08 57 48 83 EC 40 48 8B FA 49 8B D9 48 8D 54 24 28 E8 ? ? ? ? 48 8B 4C 24 28 48 85 C9 74 ? 48 8B D3 E8",
                     expected=2,
                     index=1),
                Item(name="SpawnFromLocal",
                     pattern="40 53 48 83 EC 20 48 8B DA 49 8B D0 E8 ? ? ? ? 48 85 C0 74 ? 48 8B  D3 48 8B C8 E8",
                     expected=2,
                     index=1),
            ]),
            Group(name="IScriptable", functions=[
                Item(name="InitializeScriptData",
                     pattern="48 89 51 30 4C 89 41 38 C3"),
            ]),
            Group(name="NodeRef", functions=[
                Item(name="Create",
                     pattern="48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 4C 89 64 24 20 55 41 56 41 57 48 8B EC 48 83 EC 70 8B 7A 08 33 DB 45 0F B6 E0 4C 8B F1 85 FF"),
            ]),
        ]),
    ]


# Defines base output dir
def output_dir():
    cwd = Path(__file__).resolve().parent
    return cwd.parent.parent  # 2 levels up


scan(patterns(), output_dir(), __file__)
