// Fill out your copyright notice in the Description page of Project Settings.


#include "Boulder.h"
#include <iostream>

// Sets default values
ABoulder::ABoulder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoulder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoulder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoulder::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, FVector NormalImpulse,
    const FHitResult& Hit)
{
    if (OtherActor && OtherActor->ActorHasTag("DestroyBall"))
    {
        std::cout << "Re-pool ball here" << std::endl;
    }
}


