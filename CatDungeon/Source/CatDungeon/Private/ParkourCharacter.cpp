// Fill out your copyright notice in the Description page of Project Settings.


#include "ParkourCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h" 

// Sets default values
AParkourCharacter::AParkourCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmFor2D = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmFor2D"));
	SpringArmFor2D->SetupAttachment(RootComponent);
	SpringArmFor2D->TargetArmLength = 500.f;
	SpringArmFor2D->bUsePawnControlRotation = true;

	SpringArmFor3D = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmFor3D"));
	SpringArmFor3D->SetupAttachment(RootComponent);
	SpringArmFor3D->TargetArmLength = 500.f;
	SpringArmFor3D->bUsePawnControlRotation = true;

	CameraFor2D = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFor2D"));
	CameraFor2D->SetupAttachment(SpringArmFor2D, USpringArmComponent::SocketName);
	CameraFor2D->bUsePawnControlRotation = false;

	CameraFor3D = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFor3D"));
	CameraFor3D->SetupAttachment(SpringArmFor3D, USpringArmComponent::SocketName);
	CameraFor3D->bUsePawnControlRotation = false;

	bIsCrouching = false;
	bIsJumping = false;
}

// Called when the game starts or when spawned
void AParkourCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AParkourCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetCharacterMovement()->IsFalling() == false)
	{
		if (bIsJumping)  
		{
			StopJumping();
			bIsJumping = false; 
		}
	}

	if (Controller)
	{
		//AddMovementInput(GetActorForwardVector(), 1.0f);
	}
}

// Called to bind functionality to input
void AParkourCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AParkourCharacter::OnCrouchPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AParkourCharacter::OnCrouchReleased);

	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AParkourCharacter::OnJumpPressed);
	
}

void AParkourCharacter::OnCrouchPressed()
{
	//bIsCrouching = true;
	Super::Crouch();

}

void AParkourCharacter::OnCrouchReleased()
{
	//bIsCrouching = false;
	Super::UnCrouch();
}

void AParkourCharacter::OnJumpPressed()
{
	//bIsCrouching = false;
	bIsJumping = true;

	UCharacterMovementComponent* CharMovement = GetCharacterMovement();
	if (CharMovement)
	{
		CharMovement->JumpZVelocity = 800.0f; // Adjust the height of the jump
		CharMovement->GravityScale = 1.5f;   // Adjust gravity (default is 1.0)
		Super::Jump();
	}
}

