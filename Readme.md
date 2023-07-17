# Classes

### Player
- Kingdom Level
- Kingdom Happiness / Morale
- Material Amount
- Adventurer Limit
- Current Quests
- Day/Night Cycle using ticks
- Treasury

---

## Characters
- Level
- Class

| Class | Requirements |
|-------|--------------|
| Vagrant | None |
| Warrior | Vagrant Lvl. 10 |
| Priest | Vagrant Lvl. 10 |
| Thief | Vagrant Lvl. 10 |
| Mage | Vagrant Lvl. 10 |
| Ranger | Vagrant Lvl. 10 |

- Name
- Stats
- Happiness / Morale
- Family
- Gender?
#### Inventory
- Equipment Slots
- Inventory limit

#### NPC
- Name
- Gender?
- House

---

### Items
- Type
- Level Req.
- Damage / Defence
- Special Effect

---

### Buildings

- Building Limits
- Investable?
- Quest Unlockable

| Building | Type | Description |
|----------|------|-------------|
| Bakery | Morale Boost | this building boosts citizien Morale/Happiness |
| House | Citiziens + Adventurers | Small house generates family of 2 |
| House+ | Citiziens + Adventurers | Medium house generates family of 4 |
| House++ | Citiziens + Adventurers | Large house generates Family of 6|
| Guild Hall | Adventurer Morale/Happiness | Improves Adventurer Morale |
| Weapon Shop | Adventurer Weapons | Adventurers automatically gather better weapons with earned money |
| Armoury | Adventurer Armour | Adventurers automatically gather better armour with earned money |
| Accessory Shop | Adventurer Accessories | Adventurers automatically gather better accessories with earned money |
| Skill Training | Class Skills | Adventurers automatically buy skills as they hit reqs and have enough money |

---

### Quests
 - Difficulty 
 - Destination
 - Events / Steps

 | Event Type | Difficulty |
 |------------|------------|
 | Enemy Encounter | Any |
 | Find Item | Any |
 | Increase Exploration | Any |
 | Fight Boss | 1 |
 | Fight Legendary Boss | 2 |
 


 ---


### Map
- Dungeons

---


### Enemies
- Generated upon Party arrival

---

## Engine

- Tick based Game Time

### Systems
| Component | Description | Completion |
|-----------|--------------|-----------|
| Ticks | Game timing system | ==In Progress== |
| Quest Events | Generated upon Quest Accept - more events as difficulty increases | **Not Started** |
| Citizien + Adventurer Generation | Generated upon building House/House+/House++ | **Not Started** |
| Enemy Generation | Generated upon Party entering dungeon | **Not Started** |
| Quest Difficulty | More difficult = More Reward | **Not Started** |
| Party System | Game Progression element | **Not Started** |
| Dungeon Exploration | Exploring allows the scouting of areas in order to enable bossfight quests etc. | **Not Started** |

---

# Overall Progress

| Component | Completion |
|-----------|------------|
| Player | ==In Progress== |
| Characters | ==In Progress== |
| Enemies | **Not Started** |
| Quests | **Not Started** |
| Map | **Not Started** |
| Dungeons | **Not Started** |
| Enemies | **Not Started** |
| Buildings | **Not Started** |

---

# Tasks for v0.1
- [x] Player
- [ ] Characters
- [ ] Buildings
- [ ] Map
- [ ] Dungeons
- [ ] Enemies