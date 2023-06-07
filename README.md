# InteractionComponent
 Interaccion component/system with Outline implementation.
 (Using the default FPSCharacter UE project)
 
 ![Captura de pantalla 2023-06-06 215355](https://github.com/DevSherman/InventoryAddOn/assets/10392153/8102eaeb-42c8-487e-8e7b-03ca0ae1774c)
 
 To implement this system only need add this:
 
 1-Create InteractionComponent in the FPSCharacter.
 
 ``` Interaction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction")); ```
 
 2-Set/Bind a key to create a funciton to implent this.
 
 ```if (Interaction->Avaliable()) Interaction->Interact(); ```
 
 3-Update Component in a TickFunction, this requiere a uscenecomponen to use as origin/pivot (in the most cases is the camera component)
 
  ```Interaction->Update(FirstPersonCameraComponent);```

To implement the Ouline Shader:

1-Set this configuration in the project settings.

![Captura de pantalla 2023-06-06 213119](https://github.com/DevSherman/InventoryAddOn/assets/10392153/eb380525-7058-4017-8462-3e8ca3bc1d91)

2-Create a PostProcessVolume and set the material (M_Oultine)

![Captura de pantalla 2023-06-06 213244](https://github.com/DevSherman/InventoryAddOn/assets/10392153/4d5c9d7c-35f6-4e03-ba84-f67d2d8f6f92)

Enjoy.
