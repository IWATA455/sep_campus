using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyScript : MonoBehaviour
{
   
    void Start()
    {
        //Debug.Log("こんにちわ");
        
    }
    
    int i = 0;
    void Update()
    {
        //これが移動とかに使える関数
        // this.transform.Translate(new Vector3(0.5f, 0.0f, 0.0f));
        //これが回転
        // this.transform.Rotate(new Vector3(0f, 0f, 5f));
        //下のとまた別な方法
        /*   public float speed = 3.0f;
         if (Input.GetKey("down"))
        {
            transform.position -= transform.forward * speed * Time.deltaTime;
        }
        if (Input.GetKey("right"))
        {
            transform.position += transform.right * speed * Time.deltaTime;
        }
        if (Input.GetKey("left"))
        {
            transform.position -= transform.right * speed * Time.deltaTime;
        }*/

        //下に下がる
        //キー操作
        if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            transform.Translate(0, -1, 0);
        }
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            transform.Translate(-1, 0, 0);
        }
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            transform.Translate(1, 0, 0);
        }

        if (Input.GetKeyDown(KeyCode.D))
        {
            this.transform.Rotate(new Vector3(0f, 0f, 90.0f));
        }
        if (Input.GetKeyDown(KeyCode.A))
        {
            this.transform.Rotate(new Vector3(0f, 0f, -90.0f));
        }

    }
}
