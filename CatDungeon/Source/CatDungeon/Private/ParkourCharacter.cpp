// Fill out your copyright notice in the Description page of Project Settings.


#include "ParkourCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

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
	CameraFor3D->SetupAttachment(SpringArmFor2D, USpringArmComponent::SocketName);
	CameraFor3D->bUsePawnControlRotation = false;

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

}

// Called to bind functionality to input
void AParkourCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

