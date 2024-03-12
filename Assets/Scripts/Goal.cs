using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Goal : MonoBehaviour
{
public GameObject GoalUI;
    IEnumerator LoadNewScene()
    {
       
        yield return new WaitForSeconds(5f);
  SceneManager.LoadScene("Title");
  
        
    }
 public GameObject DroneObj;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject == DroneObj) // �^�O��"Item"�ł���I�u�W�F�N�g�����ɓK�p
        {
            GoalUI.SetActive(true);
           StartCoroutine(LoadNewScene());
             
            
        }
    }
}
