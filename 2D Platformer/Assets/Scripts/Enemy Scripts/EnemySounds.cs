using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySounds : MonoBehaviour
{
    public AudioSource blueReaperSound;

    public AudioSource goblinSound;

    public AudioSource slimeSound1;
    public AudioSource slimeSound2;
    public AudioSource slimeSound3;

    public AudioSource reaperBossSound;

    public AudioSource evilWizardSound1;
    public AudioSource evilWizardSound2;

    public AudioSource rougeKnightSound1;
    public AudioSource rougeKnightSound2;
    public AudioSource rougeKnightSound3;

    public void blueReaperAttackSound()
    {
        blueReaperSound.Play();
    }
    public void goblinAttackSound()
    {
        goblinSound.Play();
    }
    public void slimeAttackSound1()
    {
        slimeSound1.Play();
    }
    public void slimeAttackSound2()
    {
        slimeSound2.Play();
    }
    public void slimeAttackSound3()
    {
        slimeSound3.Play();
    }
    public void reaperBossAttack1Sound()
    {
        reaperBossSound.Play();
    }

    public void evilWizardBossAttack1Sound()
    {
        evilWizardSound1.Play();
    }
    public void evilWizardBossAttack2Sound()
    {
        evilWizardSound2.Play();
    }
    public void rougeKnightAttack1Sound()
    {
        rougeKnightSound1.Play();
    }

    public void rougeKnightAttack2Sound()
    {
        rougeKnightSound2.Play();
    }
    public void rougeKnightAttack3Sound()
    {
        rougeKnightSound3.Play();
    }
}
